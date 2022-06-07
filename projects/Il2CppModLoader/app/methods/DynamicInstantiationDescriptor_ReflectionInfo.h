#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DynamicInstantiationDescriptor_ReflectionInfo {
    IL2CPP_REGISTER_METHOD(0x00245220, void, ctor_1, (app::DynamicInstantiationDescriptor_ReflectionInfo__Boxed * this_ptr, app::FieldInfo_1 * field, app::MethodInfo_1 * dynamic_provider))
    IL2CPP_REGISTER_METHOD(0x00245240, void, ctor_2, (app::DynamicInstantiationDescriptor_ReflectionInfo__Boxed * this_ptr, app::FieldInfo_1 * field, app::DynamicInstantiationDescriptor_CountGetter * count_getter, bool is_moon_reference, bool is_array_or_list, bool nullable))
}
