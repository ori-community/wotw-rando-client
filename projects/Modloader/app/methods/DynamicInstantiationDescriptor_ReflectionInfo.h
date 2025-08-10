#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationDescriptor_CountGetter.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor_ReflectionInfo__Boxed.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1.h>

namespace app::classes::DynamicInstantiationDescriptor_ReflectionInfo {
    IL2CPP_REGISTER_METHOD(
        0x00245220,
        void,
        ctor_1,
        app::DynamicInstantiationDescriptor_ReflectionInfo__Boxed* this_ptr,
        app::FieldInfo_1* field,
        app::MethodInfo_1* dynamic_provider
    )
    IL2CPP_REGISTER_METHOD(
        0x00245240,
        void,
        ctor_2,
        app::DynamicInstantiationDescriptor_ReflectionInfo__Boxed* this_ptr,
        app::FieldInfo_1* field,
        app::DynamicInstantiationDescriptor_CountGetter* count_getter,
        bool is_moon_reference,
        bool is_array_or_list,
        bool nullable
    )
} // namespace app::classes::DynamicInstantiationDescriptor_ReflectionInfo
