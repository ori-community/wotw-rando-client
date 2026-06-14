#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DynamicInstantiationAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Count, app::DynamicInstantiationAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Count, app::DynamicInstantiationAttribute* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_DynamicCount, app::DynamicInstantiationAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_DynamicCount, app::DynamicInstantiationAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Nullable, app::DynamicInstantiationAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Nullable, app::DynamicInstantiationAttribute* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01834240, void, ctor, app::DynamicInstantiationAttribute* this_ptr)
} // namespace app::classes::DynamicInstantiationAttribute
