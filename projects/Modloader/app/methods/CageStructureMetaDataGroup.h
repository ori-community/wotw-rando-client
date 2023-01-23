#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/CageStructureMetaDataGroup.h>
#include <Modloader/app/structs/SpiderBossBehaviourZone__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/List_1_SpiderBossBehaviourZone_.h>

namespace app::classes::CageStructureMetaDataGroup {
    IL2CPP_REGISTER_METHOD(0x00824120, app::CageStructureTool*, get_CageStructure, (app::CageStructureMetaDataGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00824140, app::SpiderBossBehaviourZone__Enum, GetBehaviourZoneForPosition, (app::CageStructureMetaDataGroup * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00824380, app::List_1_SpiderBossBehaviourZone_*, GetBehaviourZonesForPosition, (app::CageStructureMetaDataGroup * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CageStructureMetaDataGroup * this_ptr))
} // namespace app::classes::CageStructureMetaDataGroup
