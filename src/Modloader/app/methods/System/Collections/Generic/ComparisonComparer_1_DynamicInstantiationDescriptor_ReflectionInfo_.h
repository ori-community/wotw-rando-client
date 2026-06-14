#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_DynamicInstantiationDescriptor_ReflectionInfo_.h>
#include <Modloader/app/structs/Comparison_1_DynamicInstantiationDescriptor_ReflectionInfo_.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor_ReflectionInfo.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_DynamicInstantiationDescriptor_ReflectionInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_DynamicInstantiationDescriptor_ReflectionInfo_* this_ptr,
        app::Comparison_1_DynamicInstantiationDescriptor_ReflectionInfo_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A210,
        int32_t,
        Compare,
        app::ComparisonComparer_1_DynamicInstantiationDescriptor_ReflectionInfo_* this_ptr,
        app::DynamicInstantiationDescriptor_ReflectionInfo x,
        app::DynamicInstantiationDescriptor_ReflectionInfo y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_DynamicInstantiationDescriptor_ReflectionInfo_
