#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/fsMetaProperty.h>
#include <Modloader/app/structs/fsConfig.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::FullSerializer::Internal::fsMetaProperty {
    IL2CPP_REGISTER_METHOD(0x01658810, void, ctor_1, (app::fsMetaProperty * this_ptr, app::fsConfig* config, app::FieldInfo_1* field))
    IL2CPP_REGISTER_METHOD(0x016588D0, void, ctor_2, (app::fsMetaProperty * this_ptr, app::fsConfig* config, app::PropertyInfo_1* property))
    IL2CPP_REGISTER_METHOD(0x01658A50, void, CommonInitialize, (app::fsMetaProperty * this_ptr, app::fsConfig* config))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Type*, get_StorageType, (app::fsMetaProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_StorageType, (app::fsMetaProperty * this_ptr, app::Type* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Type*, get_OverrideConverterType, (app::fsMetaProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_OverrideConverterType, (app::fsMetaProperty * this_ptr, app::Type* value))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_CanRead, (app::fsMetaProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_CanRead, (app::fsMetaProperty * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_CanWrite, (app::fsMetaProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5DF40, void, set_CanWrite, (app::fsMetaProperty * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_JsonName, (app::fsMetaProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_JsonName, (app::fsMetaProperty * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_MemberName, (app::fsMetaProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_MemberName, (app::fsMetaProperty * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsPublic, (app::fsMetaProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsPublic, (app::fsMetaProperty * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_IsReadOnly, (app::fsMetaProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C15D0, void, set_IsReadOnly, (app::fsMetaProperty * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01658B60, void, Write, (app::fsMetaProperty * this_ptr, app::Object* context, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01658DA0, app::Object*, Read, (app::fsMetaProperty * this_ptr, app::Object* context))
} // namespace app::classes::FullSerializer::Internal::fsMetaProperty
