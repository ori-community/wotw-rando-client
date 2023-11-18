#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Void.h>
#include <Modloader/app/structs/Allocator__Enum.h>
#include <Modloader/app/structs/AnimationStream.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_JobWithMonoBehaviour.h>
#include <Modloader/app/structs/BatchQueryJob_2_UnityEngine_CapsulecastCommand_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/BatchQueryJob_2_UnityEngine_RaycastCommand_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/BatchQueryJob_2_UnityEngine_SpherecastCommand_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/BlendGradientColorsJob.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/CapsulecastCommand.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/DelayJointPostprocessJob.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/MatchJointsJob.h>
#include <Modloader/app/structs/MoonTrailSystem_SimulateJob.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/RaycastCommand.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Job.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Job.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job.h>
#include <Modloader/app/structs/SpherecastCommand.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TransformStreamHandle.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_Job.h>
#include <Modloader/app/structs/VerletStructure_JobWithMonoBehaviour.h>
#include <Modloader/app/structs/XboxControllerManager_VibrationJob.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::Unity::Collections::LowLevel::Unsafe::UnsafeUtility {
    IL2CPP_REGISTER_METHOD(0x02418CB0, app::Void*, Malloc, (int64_t size, int32_t alignment, app::Allocator__Enum allocator))
    IL2CPP_REGISTER_METHOD(0x02418D20, void, Free, (app::Void * memory, app::Allocator__Enum allocator))
    IL2CPP_REGISTER_METHOD(0x02418D80, void, MemCpy, (app::Void * destination, app::Void* source, int64_t size))
    IL2CPP_REGISTER_METHOD(0x02418DF0, void, MemClear, (app::Void * destination, int64_t size))
    IL2CPP_REGISTER_METHOD(0x02418E50, int32_t, SizeOf_1, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x02418EA0, bool, IsBlittable_1, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x013DD740, bool, IsValueType, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x02418EF0, bool, IsPrimitive, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x02418F20, bool, IsBlittableValueType, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x02418FB0, app::String*, GetReasonForTypeNonBlittableImpl, (app::Type * t, app::String* name))
    IL2CPP_REGISTER_METHOD(0x02419250, bool, IsArrayBlittable, (app::Array * arr))
    IL2CPP_REGISTER_METHOD(0x024192A0, app::String*, GetReasonForArrayNonBlittable, (app::Array * arr))
    IL2CPP_REGISTER_METHOD(0x0157BDF0, app::Object*, ReadArrayElement_1, (app::Void * source, int32_t index))
    IL2CPP_REGISTER_METHOD(0x015E3900, void, WriteArrayElement_1, (app::Void * destination, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, AddressOf_1, (app::BatchQueryJob_2_UnityEngine_CapsulecastCommand_UnityEngine_RaycastHit_ * output))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, AddressOf_2, (app::BatchQueryJob_2_UnityEngine_RaycastCommand_UnityEngine_RaycastHit_ * output))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, AddressOf_3, (app::BatchQueryJob_2_UnityEngine_SpherecastCommand_UnityEngine_RaycastHit_ * output))
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, SizeOf_2, ())
    IL2CPP_REGISTER_METHOD(0x0043D9A0, int32_t, SizeOf_3, ())
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, SizeOf_4, ())
    IL2CPP_REGISTER_METHOD(0x0156A260, bool, IsBlittable_2, ())
    IL2CPP_REGISTER_METHOD(0x0156A350, bool, IsGenericListBlittable, ())
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, AlignOf_1, ())
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, AlignOf_2, ())
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, AlignOf_3, ())
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, AlignOf_4, ())
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, AlignOf_5, ())
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, AlignOf_6, ())
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, AlignOf_7, ())
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, AlignOf_8, ())
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, AlignOf_9, ())
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, AlignOf_10, ())
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, AlignOf_11, ())
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, SizeOf_5, ())
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, SizeOf_6, ())
    IL2CPP_REGISTER_METHOD(0x00E3E570, int32_t, SizeOf_7, ())
    IL2CPP_REGISTER_METHOD(0x00E3E390, int32_t, SizeOf_8, ())
    IL2CPP_REGISTER_METHOD(0x007E3F10, int32_t, SizeOf_9, ())
    IL2CPP_REGISTER_METHOD(0x00ADC4A0, int32_t, SizeOf_10, ())
    IL2CPP_REGISTER_METHOD(0x007E3F10, int32_t, SizeOf_11, ())
    IL2CPP_REGISTER_METHOD(0x00E3FB10, int32_t, SizeOf_12, ())
    IL2CPP_REGISTER_METHOD(0x00E40FA0, int32_t, SizeOf_13, ())
    IL2CPP_REGISTER_METHOD(0x00C754B0, int32_t, SizeOf_14, ())
    IL2CPP_REGISTER_METHOD(0x00ADC4A0, int32_t, SizeOf_15, ())
    IL2CPP_REGISTER_METHOD(0x015421B0, app::String*, GetReasonForGenericListNonBlittable, ())
    IL2CPP_REGISTER_METHOD(0x015E3850, void, CopyPtrToStructure_1, (app::Void * ptr, void** output))
    IL2CPP_REGISTER_METHOD(0x015E3860, void, CopyPtrToStructure_2, (app::Void * ptr, app::AnimationStream* output))
    IL2CPP_REGISTER_METHOD(0x015E3890, void, CopyStructureToPtr_1, (app::DelayJointPostprocessJob * input, app::Void* ptr))
    IL2CPP_REGISTER_METHOD(0x015E38D0, void, CopyStructureToPtr_2, (app::MatchJointsJob * input, app::Void* ptr))
    IL2CPP_REGISTER_METHOD(0x015E38F0, void, WriteArrayElement_2, (app::Void * destination, int32_t index, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x015E3910, void, WriteArrayElement_3, (app::Void * destination, int32_t index, float value))
    IL2CPP_REGISTER_METHOD(0x015E3920, void, WriteArrayElement_4, (app::Void * destination, int32_t index, app::Bounds value))
    IL2CPP_REGISTER_METHOD(0x015E3940, void, WriteArrayElement_5, (app::Void * destination, int32_t index, app::CapsulecastCommand value))
    IL2CPP_REGISTER_METHOD(0x015E3970, void, WriteArrayElement_6, (app::Void * destination, int32_t index, app::Color value))
    IL2CPP_REGISTER_METHOD(0x015E3980, void, WriteArrayElement_7, (app::Void * destination, int32_t index, app::TransformStreamHandle value))
    IL2CPP_REGISTER_METHOD(0x015E3970, void, WriteArrayElement_8, (app::Void * destination, int32_t index, app::Quaternion value))
    IL2CPP_REGISTER_METHOD(0x015E39A0, void, WriteArrayElement_9, (app::Void * destination, int32_t index, app::RaycastCommand value))
    IL2CPP_REGISTER_METHOD(0x015E39D0, void, WriteArrayElement_10, (app::Void * destination, int32_t index, app::RaycastHit value))
    IL2CPP_REGISTER_METHOD(0x015E3A00, void, WriteArrayElement_11, (app::Void * destination, int32_t index, app::SpherecastCommand value))
    IL2CPP_REGISTER_METHOD(0x015E3980, void, WriteArrayElement_12, (app::Void * destination, int32_t index, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, AddressOf_4, (app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour * output))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, AddressOf_5, (app::BlendGradientColorsJob * output))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, AddressOf_6, (app::XboxControllerManager_VibrationJob * output))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, AddressOf_7, (app::MoonTrailSystem_SimulateJob * output))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, AddressOf_8, (app::SimpleSwayAnimPostprocess_Job * output))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, AddressOf_9, (app::SimpleSwayBossAnimPostprocess_Job * output))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, AddressOf_10, (app::VerletPhysicsAnimationPostprocess_Job * output))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, AddressOf_11, (app::SoundZoneProcessor_Job * output))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, AddressOf_12, (app::Int32Enum__Enum * output))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, AddressOf_13, (app::VerletStructure_JobWithMonoBehaviour * output))
    IL2CPP_REGISTER_METHOD(0x0157BDE0, uint8_t, ReadArrayElement_2, (app::Void * source, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0157BE00, float, ReadArrayElement_3, (app::Void * source, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0157BE10, app::Bounds, ReadArrayElement_4, (app::Void * source, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0157BE40, app::CapsulecastCommand, ReadArrayElement_5, (app::Void * source, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0157BE70, app::Color, ReadArrayElement_6, (app::Void * source, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0157BE90, app::TransformStreamHandle, ReadArrayElement_7, (app::Void * source, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0157BE70, app::Quaternion, ReadArrayElement_8, (app::Void * source, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0157BEB0, app::RaycastCommand, ReadArrayElement_9, (app::Void * source, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0157BEE0, app::RaycastHit, ReadArrayElement_10, (app::Void * source, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0157BF20, app::SpherecastCommand, ReadArrayElement_11, (app::Void * source, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0157BE90, app::Vector3, ReadArrayElement_12, (app::Void * source, int32_t index))
} // namespace app::classes::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
