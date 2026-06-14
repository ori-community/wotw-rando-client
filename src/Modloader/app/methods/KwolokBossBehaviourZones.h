#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_.h>
#include <Modloader/app/structs/KwolokBossBehaviourZones.h>
#include <Modloader/app/structs/List_1_KwolokBossBehaviourZones_ZoneAndState_.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::KwolokBossBehaviourZones {
    IL2CPP_REGISTER_METHOD(0x01247530, void, OnEnable, app::KwolokBossBehaviourZones* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012475B0, void, UpdateStates, app::KwolokBossBehaviourZones* this_ptr, app::Vector3 target_pos, app::Vector3 kwolok_pos)
    IL2CPP_REGISTER_METHOD(
        0x01247620,
        void,
        InitalizeListAndDictionary,
        app::KwolokBossBehaviourZones* this_ptr,
        app::List_1_KwolokBossBehaviourZones_ZoneAndState_* list,
        app::Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_* dic
    )
    IL2CPP_REGISTER_METHOD(0x01247660, void, InitalizeList, app::KwolokBossBehaviourZones* this_ptr, app::List_1_KwolokBossBehaviourZones_ZoneAndState_* list)
    IL2CPP_REGISTER_METHOD(
        0x01247E80,
        void,
        InitalizeDictionary,
        app::KwolokBossBehaviourZones* this_ptr,
        app::Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_* dic,
        app::List_1_KwolokBossBehaviourZones_ZoneAndState_* from_list
    )
    IL2CPP_REGISTER_METHOD(
        0x01248040,
        void,
        UpdateList,
        app::KwolokBossBehaviourZones* this_ptr,
        app::List_1_KwolokBossBehaviourZones_ZoneAndState_* list,
        app::Vector3 pos
    )
    IL2CPP_REGISTER_METHOD(0x01248150, bool, IsTargetInZone, app::KwolokBossBehaviourZones* this_ptr, app::CageStructureTool* cage)
    IL2CPP_REGISTER_METHOD(0x01248160, bool, IsKwolokInZone, app::KwolokBossBehaviourZones* this_ptr, app::CageStructureTool* cage)
    IL2CPP_REGISTER_METHOD(
        0x01248170,
        bool,
        IsInZone,
        app::KwolokBossBehaviourZones* this_ptr,
        app::CageStructureTool* cage,
        app::Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_* dic
    )
    IL2CPP_REGISTER_METHOD(0x01248270, void, ctor, app::KwolokBossBehaviourZones* this_ptr)
} // namespace app::classes::KwolokBossBehaviourZones
