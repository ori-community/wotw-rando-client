#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RebindingReason__Enum.h>
#include <Modloader/app/structs/UberShaderComponent.h>
#include <Modloader/app/structs/VoidUberShaderRebindService.h>

namespace app::classes::VoidUberShaderRebindService {
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        Rebind,
        app::VoidUberShaderRebindService* this_ptr,
        app::UberShaderComponent* target,
        app::RebindingReason__Enum reason
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        RebindAsync,
        app::VoidUberShaderRebindService* this_ptr,
        app::UberShaderComponent* target,
        app::RebindingReason__Enum reason
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishCurrentRebinding, app::VoidUberShaderRebindService* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        RegisterForUpdateIfNeeded,
        app::VoidUberShaderRebindService* this_ptr,
        app::UberShaderComponent* uber_shader_component
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::VoidUberShaderRebindService* this_ptr)
} // namespace app::classes::VoidUberShaderRebindService
