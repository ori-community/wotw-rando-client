#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/IFormatterConverter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfoEnumerator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Serialization::SerializationInfo {
    IL2CPP_REGISTER_METHOD(0x01EDE780, void, ctor_1, (app::SerializationInfo * this_ptr, app::Type* type, app::IFormatterConverter* converter))
    IL2CPP_REGISTER_METHOD(0x01EDE7A0, void, ctor_2, (app::SerializationInfo * this_ptr, app::Type* type, app::IFormatterConverter* converter, bool require_same_token_in_partial_trust))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_FullTypeName, (app::SerializationInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_AssemblyName, (app::SerializationInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EDEA60, void, SetType, (app::SerializationInfo * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01EDEC30, bool, Compare, (app::Byte__Array * a, app::Byte__Array* b))
    IL2CPP_REGISTER_METHOD(0x01EDECC0, void, DemandForUnsafeAssemblyNameAssignments, (app::String * original_assembly_name, app::String* new_assembly_name))
    IL2CPP_REGISTER_METHOD(0x01EDECD0, bool, IsAssemblyNameAssignmentSafe, (app::String * original_assembly_name, app::String* new_assembly_name))
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_MemberCount, (app::SerializationInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Type*, get_ObjectType, (app::SerializationInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsFullTypeNameSetExplicit, (app::SerializationInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_IsAssemblyNameSetExplicit, (app::SerializationInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EDF1C0, app::SerializationInfoEnumerator*, GetEnumerator, (app::SerializationInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EDF340, void, ExpandArrays, (app::SerializationInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EDF460, void, AddValue_1, (app::SerializationInfo * this_ptr, app::String* name, app::Object* value, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01EDF590, void, AddValue_2, (app::SerializationInfo * this_ptr, app::String* name, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01EDF680, void, AddValue_3, (app::SerializationInfo * this_ptr, app::String* name, bool value))
    IL2CPP_REGISTER_METHOD(0x01EDF780, void, AddValue_4, (app::SerializationInfo * this_ptr, app::String* name, char16_t value))
    IL2CPP_REGISTER_METHOD(0x01EDF880, void, AddValue_5, (app::SerializationInfo * this_ptr, app::String* name, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x01EDF980, void, AddValue_6, (app::SerializationInfo * this_ptr, app::String* name, int16_t value))
    IL2CPP_REGISTER_METHOD(0x01EDFA80, void, AddValue_7, (app::SerializationInfo * this_ptr, app::String* name, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01EDFB80, void, AddValue_8, (app::SerializationInfo * this_ptr, app::String* name, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01EDFC70, void, AddValue_9, (app::SerializationInfo * this_ptr, app::String* name, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x01EDFD60, void, AddValue_10, (app::SerializationInfo * this_ptr, app::String* name, float value))
    IL2CPP_REGISTER_METHOD(0x01EDFE60, void, AddValue_11, (app::SerializationInfo * this_ptr, app::String* name, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x01EDFF50, void, AddValueInternal, (app::SerializationInfo * this_ptr, app::String* name, app::Object* value, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01EE02F0, void, UpdateValue, (app::SerializationInfo * this_ptr, app::String* name, app::Object* value, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01EE0410, int32_t, FindElement, (app::SerializationInfo * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01EE0540, app::Object*, GetElement, (app::SerializationInfo * this_ptr, app::String* name, app::Type** found_type))
    IL2CPP_REGISTER_METHOD(0x01EE06C0, app::Object*, GetElementNoThrow, (app::SerializationInfo * this_ptr, app::String* name, app::Type** found_type))
    IL2CPP_REGISTER_METHOD(0x01EE0760, app::Object*, GetValue, (app::SerializationInfo * this_ptr, app::String* name, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01EE0940, app::Object*, GetValueNoThrow, (app::SerializationInfo * this_ptr, app::String* name, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01EE0AC0, bool, GetBoolean, (app::SerializationInfo * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01EE0C00, int32_t, GetInt32, (app::SerializationInfo * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01EE0D40, int64_t, GetInt64, (app::SerializationInfo * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01EE0E80, float, GetSingle, (app::SerializationInfo * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01EE0FC0, app::String*, GetString, (app::SerializationInfo * this_ptr, app::String* name))
} // namespace app::classes::System::Runtime::Serialization::SerializationInfo
