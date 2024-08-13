class CSI_GameSettings : ModuleGameSettings
{
	[Attribute("true")]
	string compassVisible;

	[Attribute("{D19C93F5109F3E1D}UI\Textures\HUD\Modded\Compasses\compass_shadow360.edds")]
	string compassTexture;

	[Attribute("true")]
	string squadRadarVisible;

	[Attribute("true")]
	string groupDisplayVisible;

	[Attribute("true")]
	string staminaBarVisible;

	[Attribute("true")]
	string nametagsVisible;

	[Attribute("true")]
	string rankVisible;

	[Attribute("100")]
	string squadRadarIconSize;

	[Attribute("HEAD")]
	string nametagsPosition;

	[Attribute("995")]
	string nametagsRange;

	[Attribute("true")]
	string squadRadarSelfIconVisible;

	[Attribute("true")]
	string roleNametagVisible;

	[Attribute("true")]
	string personalColorTeamMenu;
	
	[Attribute("true")]
	string groupNametagVisible;

	[Attribute("false")]
	string nametagLOSEnabled;

	//Server Overrides

	[Attribute("N/A")]
	string compassVisibleServerOverride;

	[Attribute("N/A")]
	string squadRadarVisibleServerOverride;

	[Attribute("N/A")]
	string groupDisplayVisibleServerOverride;

	[Attribute("N/A")]
	string staminaBarVisibleServerOverride;

	[Attribute("N/A")]
	string nametagsVisibleServerOverride;

	[Attribute("N/A")]
	string rankVisibleServerOverride;

	[Attribute("N/A")]
	string nametagsRangeServerOverride;

	[Attribute("N/A")]
	string roleNametagVisibleServerOverride;

	[Attribute("N/A")]
	string personalColorTeamMenuServerOverride;
	
	[Attribute("N/A")]
	string groupNametagVisibleServerOverride;

	[Attribute("N/A")]
	string nametagLOSEnabledServerOverride;
	
	//Server Defaults
	
	[Attribute("false")]
	string serverDefaultsActive;

	[Attribute("true")]
	string compassVisibleServerDefault;

	[Attribute("true")]
	string squadRadarVisibleServerDefault;

	[Attribute("true")]
	string groupDisplayVisibleServerDefault;

	[Attribute("true")]
	string staminaBarVisibleServerDefault;

	[Attribute("true")]
	string nametagsVisibleServerDefault;

	[Attribute("false")]
	string rankVisibleServerDefault;

	[Attribute("800")]
	string nametagsRangeServerDefault;

	[Attribute("false")]
	string roleNametagVisibleServerDefault;

	[Attribute("true")]
	string personalColorTeamMenuServerDefault;

	[Attribute("true")]
	string groupNametagVisibleServerDefault;

	[Attribute("false")]
	string nametagLOSEnabledServerDefault;
}
