/**
 * wm_strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 *
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_EN_H_
#define _WM_STRINGS_EN_H_


#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

// strings files must include a consts file!
#include "wm_consts_en.h" // include constants, tokens, routes

const char WM_LANGUAGE[] PROGMEM = "en-US"; // i18n lang code

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html>"
"<html lang='en'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>{v}</title>";

const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();};"
"function f() {var x = document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
"</script>"; // @todo add button states, disable on click , show ack , spinner etc

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'>"; // {c} = _bodyclass
// example of embedded logo, base64 encoded inline, No styling here
// const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAADQElEQVRoQ+2YjW0VQQyE7Q6gAkgFkAogFUAqgFQAVACpAKiAUAFQAaECQgWECggVGH1PPrRvn3dv9/YkFOksoUhhfzwz9ngvKrc89JbnLxuA/63gpsCmwCADWwkNEji8fVNgotDM7osI/x777x5l9F6JyB8R4eeVql4P0y8yNsjM7KGIPBORp558T04A+CwiH1UVUItiUQmZ2XMReSEiAFgjAPBeVS96D+sCYGaUx4cFbLfmhSpnqnrZuqEJgJnd8cQplVLciAgX//Cf0ToIeOB9wpmloLQAwpnVmAXgdf6pwjpJIz+XNoeZQQZlODV9vhc1Tuf6owrAk/8qIhFbJH7eI3eEzsvydQEICqBEkZwiALfF70HyHPpqScPV5HFjeFu476SkRA0AzOfy4hYwstj2ZkDgaphE7m6XqnoS7Q0BOPs/sw0kDROzjdXcCMFCNwzIy0EcRcOvBACfh4k0wgOmBX4xjfmk4DKTS31hgNWIKBCI8gdzogTgjYjQWFMw+o9LzJoZ63GUmjWm2wGDc7EvDDOj/1IVMIyD9SUAL0WEhpriRlXv5je5S+U1i2N88zdPuoVkeB+ls4SyxCoP3kVm9jsjpEsBLoOBNC5U9SwpGdakFkviuFP1keblATkTENTYcxkzgxTKOI3jyDxqLkQT87pMA++H3XvJBYtsNbBN6vuXq5S737WqHkW1VgMQNXJ0RshMqbbT33sJ5kpHWymzcJjNTeJIymJZtSQd9NHQHS1vodoFoTMkfbJzpRnLzB2vi6BZAJxWaCr+62BC+jzAxVJb3dmmiLzLwZhZNPE5e880Suo2AZgB8e8idxherqUPnT3brBDTlPxO3Z66rVwIwySXugdNd+5ejhqp/+NmgIwGX3Py3QBmlEi54KlwmjkOytQ+iJrLJj23S4GkOeecg8G091no737qvRRdzE+HLALQoMTBbJgBsCj5RSWUlUVJiZ4SOljb05eLFWgoJ5oY6yTyJp62D39jDANoKKcSocPJD5dQYzlFAFZJflUArgTPZKZwLXAnHmerfJquUkKZEgyzqOb5TuDt1P3nwxobqwPocZA11m4A1mBx5IxNgRH21ti7KbAGiyNn3HoF/gJ0w05A8xclpwAAAABJRU5ErkJggg==' /><h1>{v}</h1><h3>Renewaa WiFi Portal</h3>";
const char HTTP_ROOT_MAIN[]        PROGMEM =
"<div style='text-align:center;'>"
    "<img src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAA9CAYAAADrnOpZAAABhWlDQ1BJQ0MgcHJvZmlsZQAAKJF9kT1Iw0AcxV9TtSoVBzuIKGSoThZERRxLFYtgobQVWnUwufRDaNKQpLg4Cq4FBz8Wqw4uzro6uAqC4AeIs4OToouU+L+k0CLGg+N+vLv3uHsHCPUyU82OKKBqlpGKx8RsbkUMvKIHI+jCBESJmXoivZCB5/i6h4+vdxGe5X3uz9Gn5E0G+ETiKNMNi3ideGbT0jnvE4dYSVKIz4nHDbog8SPXZZffOBcdFnhmyMik5ohDxGKxjeU2ZiVDJZ4mDiuqRvlC1mWF8xZntVxlzXvyFwbz2nKa6zSHEcciEkhChIwqNlCGhQitGikmUrQf8/APOf4kuWRybYCRYx4VqJAcP/gf/O7WLExNuknBGND5Ytsfo0BgF2jUbPv72LYbJ4D/GbjSWv5KHZj9JL3W0sJHQP82cHHd0uQ94HIHGHzSJUNyJD9NoVAA3s/om3LAwC3Qu+r21tzH6QOQoa6WboCDQ2CsSNlrHu/ubu/t3zPN/n4A87Zy2ukyrwUAAAAGYktHRAD/AP8A/6C9p5MAAAAJcEhZcwAADdcAAA3XAUIom3gAAAAHdElNRQfoCR0GMh6KUsvcAAAEyUlEQVRo3u2abYgVVRjHf7t7c1tqKzeJLdpdK7UtxQijNiSTsCUjevtQbhakVB8iE4vtjbY1S0vsBZTMyjKtrFXTLa01e7P6EpRRURFBpVQs1BKZyV43vduH+x8Yxjlz58ycud7AP1yWnTNzzvmfc57n+T/PDPzPURVy7UigGagPadsNFIAh4DdguET/xwHnpJjffmBP4NoP/mtBAtOAS4BfgEFDpzVAA3AicLsIhWEMcDfwE/BnDLKlkNO4o4F7gT/CbnpPA8X5XQDcFzHgncAEi/7i/mYCt3iDVAcG/cdiRT4GGoHzDO29wJwMjv1u/z9BAgcsO5ujXciFtP2ovxMcE9gfRSAJVgC3Gdq6gIWOCQxHEUhiaG8DY4GmkLbfgXeAG8pFICl2APMNbc8AVwM7K5nA88AnmmgQBeABYFOlHiEPq4CrgKND2r4B/gYmVeoOeHgY6DS0PQLMq3QC3wN5ReEg9gGv+INQpR0hD4uA6wxtW4E2YIErArmEndwqg/X0Ut4nvP4Ffo54tjvlLhRcEFgOrAPWAxssn/0VqJMY7E+7C7kUK3ENMKDV3xJx383AaT55XQOMSDH5KlcEvKO0F6gFXjfc0wrc4TiHKZiMuCpBh50SbCbD3SyiLgkMu/ZC85VshMnn7cBUhwSqo3YgDZYp1bw/pG1lRIBzugNVKTtfIdH2YOD6u8DkchBwgZeAz4AnAv0vi1CszozYFTYDbyheHKFrH6hCcXolGjEG412lfKBW1x5XXEhL4ICJwF7HO/Ep8JjyhXqRGm/I3uKizl/yqQ5Rk02OSXyrs/8sMBJ4tEQ5phTqFf2NPrYbuCKDes7JwGsqxfQBpybspwuYGEciLMmAxDSgR0n+mgTPd9vIkrO0Yq0ZEFlPsdw4Pub924HVwHTb83aU/PfsDEhskgAsdd9ESfZT0hhiB/BcBiRWKjaY2juAp+R5UmOsVuJ8xyQuMlxf5CBmHIScxFpXBrvh/WbrvLeRIdqBV+UaXRPoBVooA06QcHMdMzqBJzPUaQfpknka0CWJyyU/GpJMqlVR0gaTgI0Wfj3OrwlYS/FNUOQKBisNLfK9/TLWfRYaZQnwlWS0y3LlkLxSyRcwW30rMFWB5kzLAa+XF3nR4W5cLKfRWGrwDSEPL09QSRujSHuhQxKNWphzowZeZ3h4BvACcLwFiRHAYuXHLg38HrnvUPREPNgsglMsd2O6dqPFEYEpwKWmylxUSrlLf7+WfSwk3lvNPuBLicJrtUhpcUyanPghTagnjlEJ/fJwo4GnHRCoMTWstdjKZiUluQQxYwtwdoojNNO0AwWLiewCPsT+Y44dkslzQwpgNgrASVnlL2BUggnsAW6k+CFIL3BSUgK5lAQg8OrfEmuAz6V72oFtSSq9adCA4bMXC3wHXKlouzimATt5P9AmofWFA68yBNwFvA+8qewvVnk9rDAb95ud1RS/7nKNUcDLki9hY7crniQ+QkuBcTLCfAYEBiQI8xKEO6N2wMaHLwDOkGLtK0Oy5Bn4scAsuezE5fXJFN+DdZZp8n4D7wAukxT5SNF80MYG5qp+U8ehRbvyk1lRccAPz0gHgJs49NgWJ04sVT7cBrylHLeiEfT7tRRfleYVHQc5jMOIxH9NR6ZVR2mXvQAAAABJRU5ErkJggg==' alt='Logo' style='width:100px; height:auto;'>"
    "<h1 style='color:blue; font-size:36px;'>{t}</h1>"
    "<h3>{v}</h3>"
"</div>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Configure WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configure WiFi (No scan)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Info</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Setup</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>Close</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Restart</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>Exit</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Erase</button></form><br/>\n", // MENU_ERASE
"<form action='/update'  method='get'><button>Update</button></form><br/>\n",// MENU_UPDATE
"<hr><br/>" // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)' data-ssid='{V}'>{v}</a>{qi}{qp}</div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Password</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'><input type='checkbox' id='showpass' onclick='f()'> <label for='showpass'>Show Password</label><br/>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Save</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>\n"; // do not remove newline!

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Refresh</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Saving Credentials<br/>Trying to connect ESP to network.<br />If it fails reconnect to AP to try again</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Saved<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Erase WiFi config</button></form>";
const char HTTP_UPDATEBTN[]        PROGMEM = "<br/><form action='/update' method='get'><button>Update</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Back</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>Connected</strong> to {v}<br/><em><small>with IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>Not connected</strong> to {v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Authentication failure"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>AP not found";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>Could not connect"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>No AP set</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
"body, .c {text-align: center; font-family: 'Segoe UI', Tahoma, sans-serif; background-color: #f4f4f9; color: #333; margin: 0; padding: 0; display: flex; justify-content: center; align-items: center; min-height: 100vh; overflow-x: hidden;}"
".wrap {text-align: left; display: inline-block; min-width: 260px; max-width: 600px; width: 90%; padding: 20px; background-color: #fff; border-radius: 10px; box-shadow: 0 4px 10px rgba(0, 0, 0, 0.1); overflow-y: auto; max-height: 100vh;}"
"div, input, select {padding: 8px; font-size: 1em; margin: 10px 0; box-sizing: border-box; border-radius: 5px; box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1); transition: all 0.3s ease-in-out;}"
"input, button, select, .msg {border-radius: .3rem; width: 100%;}"
"input[type=radio], input[type=checkbox] {width: auto;}"
"button, input[type='button'], input[type='submit'] {cursor: pointer; border: none; background-color: #007bff; color: #fff; line-height: 2.4rem; font-size: 1.1rem; width: 100%; border-radius: 8px; transition: background-color 0.3s ease, transform 0.3s;}"
"button:hover, input[type='button']:hover, input[type='submit']:hover {background-color: #0056b3; transform: translateY(-2px); box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);}"
"input[type='file'] {border: 2px solid #007bff;}"
"a {color: #007bff; font-weight: 600; text-decoration: none; transition: color 0.3s;}"
"a:hover {color: #0056b3; text-decoration: underline;}"

// quality icons
".q {height: 18px; margin: 0; padding: 0 6px; text-align: right; min-width: 40px; float: right;}"
".q.q-0:after {background-position-x: 0;}"
".q.q-1:after {background-position-x: -16px;}"
".q.q-2:after {background-position-x: -32px;}"
".q.q-3:after {background-position-x: -48px;}"
".q.q-4:after {background-position-x: -64px;}"
".q.l:before {background-position-x: -80px; padding-right: 5px;}"
".ql .q {float: left;}"
".q:after, .q:before {content: ''; width: 16px; height: 16px; display: inline-block; background-repeat: no-repeat; background-position: 16px 0;"
"background-image: url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
"@media (-webkit-min-device-pixel-ratio: 2), (min-resolution: 192dpi) {"
".q:before, .q:after {"
"background-image: url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"

// msg callouts
".msg {padding: 20px; margin: 20px 0; border-radius: 8px; background-color: #f1f1f1; border-left: 5px solid #ccc; box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);}"
".msg h4 {margin-top: 0; margin-bottom: 8px;}"
".msg.P {border-left-color: #007bff;}"
".msg.P h4 {color: #007bff;}"
".msg.D {border-left-color: #e74c3c;}"
".msg.D h4 {color: #e74c3c;}"
".msg.S {border-left-color: #2ecc71;}"
".msg.S h4 {color: #2ecc71;}"

// lists
"dt {font-weight: 600;}"
"dd {margin: 0; padding: 0 0 0.5em 0; min-height: 14px;}"
"td {vertical-align: top;}"

// button transitions and states
"button {transition: background-color 0.3s, opacity 0.3s ease;}"
"button.D {background-color: #e74c3c;}"
"button:active {opacity: 0.7; transform: translateY(2px);}"

// Media queries for responsive design
"@media (max-width: 768px) {"
".wrap {width: 95%; padding: 15px;}"
"button, input[type='button'], input[type='submit'] {font-size: 1rem; line-height: 2rem;}"
".msg {padding: 15px; margin: 15px 0;}"
"}"

"@media (max-width: 480px) {"
".wrap {width: 100%; padding: 10px; border-radius: 5px;}"
"button, input[type='button'], input[type='submit'] {font-size: 0.9rem; line-height: 1.8rem;}"
".msg {padding: 10px; margin: 10px 0;}"
"}"
"</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[]             PROGMEM =
 "<br/><h3>Available pages</h3><hr>"
 "<table class='table' style='width: 100%; border-collapse: collapse; margin: 20px 0; box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);'>"
 "<thead style='background-color: #007bff; color: white;'><tr><th style='padding: 12px; text-align: left; border-bottom: 2px solid #ddd;'>Page</th><th style='padding: 12px; text-align: left; border-bottom: 2px solid #ddd;'>Function</th></tr></thead>"
 "<tbody>"
 "<tr><td style='padding: 10px; border-bottom: 1px solid #ddd;'><a href='/' style='color: #007bff; text-decoration: none;'>/</a></td>"
 "<td style='padding: 10px; border-bottom: 1px solid #ddd;'>Menu page.</td></tr>"
 "<tr><td style='padding: 10px; border-bottom: 1px solid #ddd;'><a href='/wifi' style='color: #007bff; text-decoration: none;'>/wifi</a></td>"
 "<td style='padding: 10px; border-bottom: 1px solid #ddd;'>Show WiFi scan results and enter WiFi configuration.(/0wifi noscan)</td></tr>"
 "<tr><td style='padding: 10px; border-bottom: 1px solid #ddd;'><a href='/wifisave' style='color: #007bff; text-decoration: none;'>/wifisave</a></td>"
 "<td style='padding: 10px; border-bottom: 1px solid #ddd;'>Save WiFi configuration information and configure device. Needs variables supplied.</td></tr>"
 "<tr><td style='padding: 10px; border-bottom: 1px solid #ddd;'><a href='/param' style='color: #007bff; text-decoration: none;'>/param</a></td>"
 "<td style='padding: 10px; border-bottom: 1px solid #ddd;'>Parameter page</td></tr>"
 "<tr><td style='padding: 10px; border-bottom: 1px solid #ddd;'><a href='/info' style='color: #007bff; text-decoration: none;'>/info</a></td>"
 "<td style='padding: 10px; border-bottom: 1px solid #ddd;'>Information page</td></tr>"
 "<tr><td style='padding: 10px; border-bottom: 1px solid #ddd;'><a href='/u' style='color: #007bff; text-decoration: none;'>/u</a></td>"
 "<td style='padding: 10px; border-bottom: 1px solid #ddd;'>OTA Update</td></tr>"
 "<tr><td style='padding: 10px; border-bottom: 1px solid #ddd;'><a href='/close' style='color: #007bff; text-decoration: none;'>/close</a></td>"
 "<td style='padding: 10px; border-bottom: 1px solid #ddd;'>Close the captiveportal popup, config portal will remain active</td></tr>"
 "<tr><td style='padding: 10px; border-bottom: 1px solid #ddd;'>/exit</td>"
 "<td style='padding: 10px; border-bottom: 1px solid #ddd;'>Exit Config portal, config portal will close</td></tr>"
 "<tr><td style='padding: 10px; border-bottom: 1px solid #ddd;'>/restart</td>"
 "<td style='padding: 10px; border-bottom: 1px solid #ddd;'>Reboot the device</td></tr>"
 "<tr><td style='padding: 10px; border-bottom: 1px solid #ddd;'>/erase</td>"
 "<td style='padding: 10px; border-bottom: 1px solid #ddd;'>Erase WiFi configuration and reboot device. Device will not reconnect to a network until new WiFi configuration data is entered.</td></tr>"
 "</tbody></table>";
//  "<p/>Github <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";
#else
const char HTTP_HELP[]             PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Upload new firmware<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Update</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* May not function inside captive portal, open in browser http://192.168.4.1</a><small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Update failed!</strong><Br/>Reboot device and try again</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>Update successful.  </strong> <br/> Device rebooting now...</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
// @todo remove html elements from progmem, repetetive strings
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip rev</dt><dd>{1}</dd>";
  	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  	const char HTTP_INFO_aphost[]     PROGMEM = "<dt>Access point hostname</dt><dd>{1}</dd>";
    const char HTTP_INFO_psrsize[]    PROGMEM = "<dt>PSRAM Size</dt><dd>{1} bytes</dd>";
	const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd>";
    const char HTTP_INFO_hall[]       PROGMEM = "<dt>Hall</dt><dd>{1}</dd>";
#else
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash chip ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core version</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot version</dt><dd>{1}</dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real flash size</dt><dd>{1} bytes</dd>";
#endif

const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch size</dt><dd>Used / Total bytes<br/>{1} / {2}";
const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free heap</dt><dd>{1} bytes available</dd>";
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} mins {2} secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>Access point SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[]    PROGMEM = "<dt>Station SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";

const char HTTP_INFO_aboutver[]     PROGMEM = "<dt>WiFiManager</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<dt>Arduino</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutsdk[]     PROGMEM = "<dt>ESP-SDK/IDF</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutdate[]    PROGMEM = "<dt>Build date</dt><dd>{1}</dd>";

const char S_brand[]              PROGMEM = "Renewaa";
const char S_debugPrefix[]        PROGMEM = "*wm:";
const char S_y[]                  PROGMEM = "Yes";
const char S_n[]                  PROGMEM = "No";
const char S_enable[]             PROGMEM = "Enabled";
const char S_disable[]            PROGMEM = "Disabled";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Unknown";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Credentials saved";
const char S_titlewifisettings[]  PROGMEM = "Settings saved";
const char S_titlewifi[]          PROGMEM = "Renewaa Device Portal";
const char S_titleinfo[]          PROGMEM = "Info";
const char S_titleparam[]         PROGMEM = "Setup";
const char S_titleparamsaved[]    PROGMEM = "Setup saved";
const char S_titleexit[]          PROGMEM = "Exit";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Erase";
const char S_titleclose[]         PROGMEM = "Close";
const char S_options[]            PROGMEM = "options";
const char S_nonetworks[]         PROGMEM = "No networks found. Refresh to scan again.";
const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Exiting";
const char S_resetting[]          PROGMEM = "Module will reset in a few seconds.";
const char S_closing[]            PROGMEM = "You can close the page, portal will continue to run";
const char S_error[]              PROGMEM = "An error occured";
const char S_notfound[]           PROGMEM = "File not found\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";


// softap ssid default prefix
#ifdef ESP8266
    const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
    const char S_ssidpre[]        PROGMEM = "ESP32";
#else
    const char S_ssidpre[]        PROGMEM = "WM";
#endif

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

#endif
