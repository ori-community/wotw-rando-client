#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Dictionary_2_System_String_FullSerializer_fsData_.h>
#include <Modloader/app/structs/Font.h>
#include <Modloader/app/structs/FontStyle__Enum.h>
#include <Modloader/app/structs/GUIStyleState.h>
#include <Modloader/app/structs/GradientAlphaKey__Array.h>
#include <Modloader/app/structs/GradientColorKey__Array.h>
#include <Modloader/app/structs/ImagePosition__Enum.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Keyframe__Array.h>
#include <Modloader/app/structs/RectOffset.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextAnchor__Enum.h>
#include <Modloader/app/structs/TextClipping__Enum.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WrapMode__Enum.h>
#include <Modloader/app/structs/fsBaseConverter.h>
#include <Modloader/app/structs/fsData.h>
#include <Modloader/app/structs/fsDataType__Enum.h>
#include <Modloader/app/structs/fsDataType__Enum__Array.h>
#include <Modloader/app/structs/fsResult.h>

namespace app::classes::FullSerializer::fsBaseConverter {
    IL2CPP_REGISTER_METHOD(0x01507EA0, app::Object*, CreateInstance, (app::fsBaseConverter * this_ptr, app::fsData* data, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01508080, bool, RequestCycleSupport, (app::fsBaseConverter * this_ptr, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x015081D0, bool, RequestInheritanceSupport, (app::fsBaseConverter * this_ptr, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01508290, app::fsResult, FailExpectedType, (app::fsBaseConverter * this_ptr, app::fsData* data, app::fsDataType__Enum__Array* types))
    IL2CPP_REGISTER_METHOD(0x015087C0, app::fsResult, CheckType, (app::fsBaseConverter * this_ptr, app::fsData* data, app::fsDataType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01508BC0, app::fsResult, CheckKey_1, (app::fsBaseConverter * this_ptr, app::fsData* data, app::String* key, app::fsData** subitem))
    IL2CPP_REGISTER_METHOD(0x01508C30, app::fsResult, CheckKey_2, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::String* key, app::fsData** subitem))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsBaseConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018EBC00, app::fsResult, SerializeMember_1, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x018EAA70, app::fsResult, DeserializeMember_1, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Object** value))
    IL2CPP_REGISTER_METHOD(0x018EBC00, app::fsResult, SerializeMember_2, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Keyframe__Array* value))
    IL2CPP_REGISTER_METHOD(0x018EBA40, app::fsResult, SerializeMember_3, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::WrapMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x018EAA70, app::fsResult, DeserializeMember_2, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Keyframe__Array** value))
    IL2CPP_REGISTER_METHOD(0x018EA810, app::fsResult, DeserializeMember_3, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::WrapMode__Enum* value))
    IL2CPP_REGISTER_METHOD(0x018EC2C0, app::fsResult, SerializeMember_4, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x018EB450, app::fsResult, DeserializeMember_4, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x018EBC00, app::fsResult, SerializeMember_5, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Texture2D* value))
    IL2CPP_REGISTER_METHOD(0x018EBF40, app::fsResult, SerializeMember_6, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Color value))
    IL2CPP_REGISTER_METHOD(0x018EAA70, app::fsResult, DeserializeMember_5, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Texture2D** value))
    IL2CPP_REGISTER_METHOD(0x018EAF70, app::fsResult, DeserializeMember_6, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Color* value))
    IL2CPP_REGISTER_METHOD(0x018EBC00, app::fsResult, SerializeMember_7, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::GUIStyleState* value))
    IL2CPP_REGISTER_METHOD(0x018EBA40, app::fsResult, SerializeMember_8, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::TextAnchor__Enum value))
    IL2CPP_REGISTER_METHOD(0x018EBC00, app::fsResult, SerializeMember_9, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::RectOffset* value))
    IL2CPP_REGISTER_METHOD(0x018EBA40, app::fsResult, SerializeMember_10, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::TextClipping__Enum value))
    IL2CPP_REGISTER_METHOD(0x018EC100, app::fsResult, SerializeMember_11, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x018EBD80, app::fsResult, SerializeMember_12, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, float value))
    IL2CPP_REGISTER_METHOD(0x018EBC00, app::fsResult, SerializeMember_13, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Font* value))
    IL2CPP_REGISTER_METHOD(0x018EB880, app::fsResult, SerializeMember_14, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, int32_t value))
    IL2CPP_REGISTER_METHOD(0x018EBA40, app::fsResult, SerializeMember_15, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::FontStyle__Enum value))
    IL2CPP_REGISTER_METHOD(0x018EBA40, app::fsResult, SerializeMember_16, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::ImagePosition__Enum value))
    IL2CPP_REGISTER_METHOD(0x018EBC00, app::fsResult, SerializeMember_17, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x018EB6C0, app::fsResult, SerializeMember_18, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, bool value))
    IL2CPP_REGISTER_METHOD(0x018EAA70, app::fsResult, DeserializeMember_7, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::GUIStyleState** value))
    IL2CPP_REGISTER_METHOD(0x018EA810, app::fsResult, DeserializeMember_8, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::TextAnchor__Enum* value))
    IL2CPP_REGISTER_METHOD(0x018EAA70, app::fsResult, DeserializeMember_9, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::RectOffset** value))
    IL2CPP_REGISTER_METHOD(0x018EA810, app::fsResult, DeserializeMember_10, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::TextClipping__Enum* value))
    IL2CPP_REGISTER_METHOD(0x018EB1E0, app::fsResult, DeserializeMember_11, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Vector2* value))
    IL2CPP_REGISTER_METHOD(0x018EAD10, app::fsResult, DeserializeMember_12, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, float* value))
    IL2CPP_REGISTER_METHOD(0x018EAA70, app::fsResult, DeserializeMember_13, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Font** value))
    IL2CPP_REGISTER_METHOD(0x018EA5B0, app::fsResult, DeserializeMember_14, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, int32_t* value))
    IL2CPP_REGISTER_METHOD(0x018EA810, app::fsResult, DeserializeMember_15, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::FontStyle__Enum* value))
    IL2CPP_REGISTER_METHOD(0x018EA810, app::fsResult, DeserializeMember_16, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::ImagePosition__Enum* value))
    IL2CPP_REGISTER_METHOD(0x018EAA70, app::fsResult, DeserializeMember_17, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::String** value))
    IL2CPP_REGISTER_METHOD(0x018EA350, app::fsResult, DeserializeMember_18, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, bool* value))
    IL2CPP_REGISTER_METHOD(0x018EBC00, app::fsResult, SerializeMember_19, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::GradientAlphaKey__Array* value))
    IL2CPP_REGISTER_METHOD(0x018EBC00, app::fsResult, SerializeMember_20, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::GradientColorKey__Array* value))
    IL2CPP_REGISTER_METHOD(0x018EAA70, app::fsResult, DeserializeMember_19, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::GradientAlphaKey__Array** value))
    IL2CPP_REGISTER_METHOD(0x018EAA70, app::fsResult, DeserializeMember_20, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::GradientColorKey__Array** value))
    IL2CPP_REGISTER_METHOD(0x018EA810, app::fsResult, DeserializeMember_21, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Int32Enum__Enum* value))
    IL2CPP_REGISTER_METHOD(0x018EBA40, app::fsResult, SerializeMember_21, (app::fsBaseConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Type* override_converter_type, app::String* name, app::Int32Enum__Enum value))
} // namespace app::classes::FullSerializer::fsBaseConverter
