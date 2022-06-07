#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CageStructureMetaDataGroup {
    IL2CPP_REGISTER_METHOD(0x00824120, app::CageStructureTool *, get_CageStructure, (app::CageStructureMetaDataGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00824140, app::SpiderBossBehaviourZone__Enum, GetBehaviourZoneForPosition, (app::CageStructureMetaDataGroup * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00824380, app::List_1_SpiderBossBehaviourZone_ *, GetBehaviourZonesForPosition, (app::CageStructureMetaDataGroup * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CageStructureMetaDataGroup * this_ptr))
}
