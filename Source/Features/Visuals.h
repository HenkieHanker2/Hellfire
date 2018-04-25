#pragma once

namespace SDK
{
	class CUserCmd;
	class CBaseEntity;
}

class CVisuals
{
public:
	void Draw();
	void ClientDraw();
	void DrawBulletBeams();
		
private:
	void DrawHitmarker();
	void Dlight(SDK::player_info_t * pPlayer);
	void DrawBox(SDK::CBaseEntity* entity, CColor color);
	void DrawName(SDK::CBaseEntity* entity, CColor color, int index);
	void DrawWeapon(SDK::CBaseEntity * entity, CColor color, int index);
	void DrawHealth(SDK::CBaseEntity * entity, CColor color, CColor dormant);
	void DrawAmmo(SDK::CBaseEntity * entity, CColor color, CColor dormant);
	float resolve_distance(Vector src, Vector dest);
	void DrawDistance(SDK::CBaseEntity * entity, CColor color);
	void DrawInfo(SDK::CBaseEntity * entity, CColor color, CColor alt);
	void DrawSkeleton(SDK::CBaseEntity * entity, CColor color);
	void DrawBomb(SDK::CBaseEntity* entity);
	void DrawCrosshair();
	void DrawIndicator();
	void DrawDirection(const Vector & origin);
	void ModulateWorld();
	
	void DrawWorldGrenade();
	void DrawAntiAimSides();
	void DrawBorderLines();
public:
	std::vector<std::pair<int, float>>				Entities;
	std::deque<Utils::BulletImpact_t>				Impacts;
};

extern CVisuals* visuals;