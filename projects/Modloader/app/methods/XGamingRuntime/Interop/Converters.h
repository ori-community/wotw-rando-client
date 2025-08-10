#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DisposableBuffer.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_UTF8StringPtr_Object_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_UTF8StringPtr_String_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XGameSaveBlob_Object_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievementRequirement_Object_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_Object_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievement_Object_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SizeT.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/XGameSaveBlob__Array.h>
#include <Modloader/app/structs/XblAchievement__Array.h>

namespace app::classes::XGamingRuntime::Interop::Converters {
    IL2CPP_REGISTER_METHOD(0x030B0320, void*, Offset, void* ptr, int64_t that)
    IL2CPP_REGISTER_METHOD(0x030B0330, app::DisposableBuffer*, StringArrayToUTF8StringArray, app::String__Array* strings)
    IL2CPP_REGISTER_METHOD(0x030B0A70, app::Byte__Array*, StringToNullTerminatedUTF8ByteArray, app::String* str)
    IL2CPP_REGISTER_METHOD(0x030B0B40, app::Byte__Array*, StringToNullTerminatedUTF8ByteArrayInternal, app::String* str, int32_t required_byte_array_length)
    IL2CPP_REGISTER_METHOD(0x030B0C90, app::String*, ByteArrayToString, app::Byte__Array* arr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x030B0D80, app::String*, PtrToStringUTF8, void* raw_ptr)
    IL2CPP_REGISTER_METHOD(0x018E8B10, app::Object__Array*, PtrToClassArray_1, void* raw_ptr, app::SizeT count, app::Func_2_Object_Object_* ctor)
    IL2CPP_REGISTER_METHOD(0x018E87F0, app::Object__Array*, PtrToClassArray_2, void* raw_ptr, uint32_t count, app::Func_2_Object_Object_* ctor)
    IL2CPP_REGISTER_METHOD(
        0x018E8B10,
        app::String__Array*,
        PtrToClassArray_3,
        void* raw_ptr,
        app::SizeT count,
        app::Func_2_XGamingRuntime_Interop_UTF8StringPtr_String_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E8EA0,
        app::XGameSaveBlob__Array*,
        PtrToClassArray_4,
        void* raw_ptr,
        uint32_t count,
        app::Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E8B10,
        app::XblAchievement__Array*,
        PtrToClassArray_5,
        void* raw_ptr,
        app::SizeT count,
        app::Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement_* ctor
    )
    IL2CPP_REGISTER_METHOD(0x018E8680, app::Object*, PtrToClass, void* raw_ptr, app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_* ctor)
    IL2CPP_REGISTER_METHOD(
        0x018E8B60,
        app::Object__Array*,
        PtrToClassArray_6,
        void* raw_ptr,
        uint32_t count,
        app::Func_2_XGamingRuntime_Interop_UTF8StringPtr_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E8B10,
        app::Object__Array*,
        PtrToClassArray_7,
        void* raw_ptr,
        app::SizeT count,
        app::Func_2_XGamingRuntime_Interop_UTF8StringPtr_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E8EA0,
        app::Object__Array*,
        PtrToClassArray_8,
        void* raw_ptr,
        uint32_t count,
        app::Func_2_XGamingRuntime_Interop_XGameSaveBlob_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E91F0,
        app::Object__Array*,
        PtrToClassArray_9,
        void* raw_ptr,
        uint32_t count,
        app::Func_2_XGamingRuntime_Interop_XblAchievement_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E8B10,
        app::Object__Array*,
        PtrToClassArray_10,
        void* raw_ptr,
        app::SizeT count,
        app::Func_2_XGamingRuntime_Interop_XblAchievement_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E95C0,
        app::Object__Array*,
        PtrToClassArray_11,
        void* raw_ptr,
        uint32_t count,
        app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E8B10,
        app::Object__Array*,
        PtrToClassArray_12,
        void* raw_ptr,
        app::SizeT count,
        app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E9910,
        app::Object__Array*,
        PtrToClassArray_13,
        void* raw_ptr,
        uint32_t count,
        app::Func_2_XGamingRuntime_Interop_XblAchievementRequirement_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E8B10,
        app::Object__Array*,
        PtrToClassArray_14,
        void* raw_ptr,
        app::SizeT count,
        app::Func_2_XGamingRuntime_Interop_XblAchievementRequirement_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E9C60,
        app::Object__Array*,
        PtrToClassArray_15,
        void* raw_ptr,
        uint32_t count,
        app::Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E8B10,
        app::Object__Array*,
        PtrToClassArray_16,
        void* raw_ptr,
        app::SizeT count,
        app::Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E9FC0,
        app::Object__Array*,
        PtrToClassArray_17,
        void* raw_ptr,
        uint32_t count,
        app::Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x018E8B10,
        app::Object__Array*,
        PtrToClassArray_18,
        void* raw_ptr,
        app::SizeT count,
        app::Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_Object_* ctor
    )
} // namespace app::classes::XGamingRuntime::Interop::Converters
