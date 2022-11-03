#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DynamicInstantiationPrewarmPriorityAttribute {
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_NormalPriorityRatio, (app::DynamicInstantiationPrewarmPriorityAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_NormalPriorityRatio, (app::DynamicInstantiationPrewarmPriorityAttribute * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_HighPriorityRatio, (app::DynamicInstantiationPrewarmPriorityAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83F40, void, set_HighPriorityRatio, (app::DynamicInstantiationPrewarmPriorityAttribute * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Default, (app::DynamicInstantiationPrewarmPriorityAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_Default, (app::DynamicInstantiationPrewarmPriorityAttribute * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x030E0660, void, ctor, (app::DynamicInstantiationPrewarmPriorityAttribute * this_ptr))
} // namespace app::classes::DynamicInstantiationPrewarmPriorityAttribute
