#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/TentacleDeath.h>

namespace app::classes::TentacleDeath {
    IL2CPP_REGISTER_METHOD(0x00CED840, void, OnCacheSerializedComponents, app::TentacleDeath* this_ptr, app::Entity* owner)
    IL2CPP_REGISTER_METHOD(0x00CED900, void, OnInitializeTask, app::TentacleDeath* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Hide, app::TentacleDeath* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00CEDB60,
        void,
        ModifyDeathKickbackForce,
        app::TentacleDeath* this_ptr,
        app::Damage* damage,
        float min_boost,
        float min_magntiude,
        float min_up_direction
    )
    IL2CPP_REGISTER_METHOD(0x00CEDE40, void, OnEnterTask, app::TentacleDeath* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00CEE140, void, EndReaction, app::TentacleDeath* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CEE190, app::BehaviourStatus__Enum, OnExecuteTask, app::TentacleDeath* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00CEE780, void, OnExitTask, app::TentacleDeath* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00CEE7E0, void, ctor, app::TentacleDeath* this_ptr)
} // namespace app::classes::TentacleDeath
