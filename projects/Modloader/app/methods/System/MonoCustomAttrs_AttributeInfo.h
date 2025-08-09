#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributeUsageAttribute.h>
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo.h>

namespace app::classes::System::MonoCustomAttrs_AttributeInfo {
    IL2CPP_REGISTER_METHOD(0x00CC8D50, void, ctor, app::MonoCustomAttrs_AttributeInfo* this_ptr, app::AttributeUsageAttribute* usage, int32_t inheritance_level)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::AttributeUsageAttribute*, get_Usage, app::MonoCustomAttrs_AttributeInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_InheritanceLevel, app::MonoCustomAttrs_AttributeInfo* this_ptr)
} // namespace app::classes::System::MonoCustomAttrs_AttributeInfo
