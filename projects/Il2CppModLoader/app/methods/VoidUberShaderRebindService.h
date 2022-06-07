#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::VoidUberShaderRebindService {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Rebind, (app::VoidUberShaderRebindService * this_ptr, app::UberShaderComponent * target, app::RebindingReason__Enum reason))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RebindAsync, (app::VoidUberShaderRebindService * this_ptr, app::UberShaderComponent * target, app::RebindingReason__Enum reason))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishCurrentRebinding, (app::VoidUberShaderRebindService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterForUpdateIfNeeded, (app::VoidUberShaderRebindService * this_ptr, app::UberShaderComponent * uber_shader_component))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::VoidUberShaderRebindService * this_ptr))
}
