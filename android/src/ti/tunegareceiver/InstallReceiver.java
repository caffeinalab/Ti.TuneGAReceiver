package ti.tunegareceiver;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

import com.mobileapptracker.Tracker;
import com.google.android.gms.analytics.CampaignTrackingReceiver;

public class InstallReceiver extends BroadcastReceiver {
	@Override
	public void onReceive(Context context, Intent intent) {
		// Tune
		new Tracker().onReceive(context, intent);

		// Google Analytics
		new CampaignTrackingReceiver().onReceive(context, intent);
	}
}