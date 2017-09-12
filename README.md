# Ti.TuneGAReceiver

This simple Titanium module declares a receiver that relays all the INSTALL_REFERRER intents to the Google Analytics and Tune SDK trackers.

## Usage

- Install the Tune SDK official module (https://developers.tune.com/sdk/titanium-quick-start/) locally in your project (version 4.0.0).
- Modify the module's manifest: remove the tag <receiver> completely.
- Install your Google Analytics module of choice locally. We usually use Ti.GA (https://github.com/benbahrenburg/Ti.GA).
- Install this module.
- Add this lines to the `tiapp.xml` of your app:

```
<receiver android:name="ti.tunegareceiver.InstallReceiver" android:enabled="true" android:exported="true">
	<intent-filter>
		<action android:name="com.android.vending.INSTALL_REFERRER"/>
	</intent-filter>
</receiver>
<meta-data android:name="com.google.android.gms.version" android:value="@integer/google_play_services_version"/>
```
- ????
- PROFIT!!!

## Troubleshooting

### Google Play Services

If you see this kind of error when you compile the app:
`[ERROR] Uncaught translation error: java.lang.IllegalArgumentException: already added: Lcom/google/android/gms/analytics/CampaignTrackingReceiver;`
it means that two or more of your Android modules contain the Google Play Services library. You must keep only one copy of the library and delete all the others from your modules.