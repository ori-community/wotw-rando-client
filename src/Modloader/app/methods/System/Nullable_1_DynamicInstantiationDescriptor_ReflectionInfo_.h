#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationDescriptor_ReflectionInfo.h>
#include <Modloader/app/structs/Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo_.h>
#include <Modloader/app/structs/Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    IL2CPP_REGISTER_METHOD(0x001F42C0, bool, get_HasValue, app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001F42D0,
        app::DynamicInstantiationDescriptor_ReflectionInfo,
        get_Value,
        app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001F42B0,
        void,
        ctor,
        app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed* this_ptr,
        app::DynamicInstantiationDescriptor_ReflectionInfo value
    )
    IL2CPP_REGISTER_METHOD(0x001F43D0, bool, Equals_1, app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(
        0x001F4430,
        bool,
        Equals_2,
        app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed* this_ptr,
        app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo_ other
    )
    IL2CPP_REGISTER_METHOD(0x001F44C0, int32_t, GetHashCode, app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001F4590,
        app::DynamicInstantiationDescriptor_ReflectionInfo,
        GetValueOrDefault_1,
        app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001F45B0,
        app::DynamicInstantiationDescriptor_ReflectionInfo,
        GetValueOrDefault_2,
        app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed* this_ptr,
        app::DynamicInstantiationDescriptor_ReflectionInfo default_value
    )
    IL2CPP_REGISTER_METHOD(0x001F45F0, app::String*, ToString, app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0254E580, app::Object*, Box, app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo_ o)
    IL2CPP_REGISTER_METHOD(0x0254E610, app::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo_
