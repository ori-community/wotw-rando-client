#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectManager.h>
#include <Modloader/app/structs/DeserializationEventHandler.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/FixupHolder.h>
#include <Modloader/app/structs/ISurrogateSelector.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectHolder.h>
#include <Modloader/app/structs/ObjectHolderList.h>
#include <Modloader/app/structs/RuntimeConstructorInfo.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::Serialization::ObjectManager {
    IL2CPP_REGISTER_METHOD(0x01ED7C10, void, ctor, (app::ObjectManager * this_ptr, app::ISurrogateSelector* selector, app::StreamingContext context, bool check_security, bool is_cross_app_domain))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanCallGetType, (app::ObjectManager * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_TopObject, (app::ObjectManager * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Object*, get_TopObject, (app::ObjectManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01ED7CC0, app::ObjectHolderList*, get_SpecialFixupObjects, (app::ObjectManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01ED7E80, app::ObjectHolder*, FindObjectHolder, (app::ObjectManager * this_ptr, int64_t object_i_d))
    IL2CPP_REGISTER_METHOD(0x01ED7EF0, app::ObjectHolder*, FindOrCreateObjectHolder, (app::ObjectManager * this_ptr, int64_t object_i_d))
    IL2CPP_REGISTER_METHOD(0x01ED80F0, void, AddObjectHolder, (app::ObjectManager * this_ptr, app::ObjectHolder* holder))
    IL2CPP_REGISTER_METHOD(0x01ED82C0, bool, GetCompletionInfo, (app::ObjectManager * this_ptr, app::FixupHolder* fixup, app::ObjectHolder** holder, app::Object** member, bool b_throw_if_missing))
    IL2CPP_REGISTER_METHOD(0x01ED8670, void, FixupSpecialObject, (app::ObjectManager * this_ptr, app::ObjectHolder* holder))
    IL2CPP_REGISTER_METHOD(0x01ED88C0, bool, ResolveObjectReference, (app::ObjectManager * this_ptr, app::ObjectHolder* holder))
    IL2CPP_REGISTER_METHOD(0x01ED8B30, bool, DoValueTypeFixup, (app::ObjectManager * this_ptr, app::FieldInfo_1* member_to_fix, app::ObjectHolder* holder, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01ED9120, void, CompleteObject, (app::ObjectManager * this_ptr, app::ObjectHolder* holder, bool b_object_fully_complete))
    IL2CPP_REGISTER_METHOD(0x01ED98E0, void, DoNewlyRegisteredObjectFixups, (app::ObjectManager * this_ptr, app::ObjectHolder* holder))
    IL2CPP_REGISTER_METHOD(0x01ED9AF0, app::Object*, GetObject, (app::ObjectManager * this_ptr, int64_t object_i_d))
    IL2CPP_REGISTER_METHOD(0x01ED9C00, void, RegisterString, (app::ObjectManager * this_ptr, app::String* obj, int64_t object_i_d, app::SerializationInfo* info, int64_t id_of_containing_obj, app::MemberInfo_1* member))
    IL2CPP_REGISTER_METHOD(0x01ED9E50, void, RegisterObject, (app::ObjectManager * this_ptr, app::Object* obj, int64_t object_i_d, app::SerializationInfo* info, int64_t id_of_containing_obj, app::MemberInfo_1* member, app::Int32__Array* array_index))
    IL2CPP_REGISTER_METHOD(0x01EDA550, void, CompleteISerializableObject, (app::ObjectManager * this_ptr, app::Object* obj, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01EDA770, app::RuntimeConstructorInfo*, GetConstructor, (app::RuntimeType * t))
    IL2CPP_REGISTER_METHOD(0x01EDA8C0, void, DoFixups, (app::ObjectManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EDADC0, void, RegisterFixup, (app::ObjectManager * this_ptr, app::FixupHolder* fixup, int64_t object_to_be_fixed, int64_t object_required))
    IL2CPP_REGISTER_METHOD(0x01EDAF10, void, RecordFixup, (app::ObjectManager * this_ptr, int64_t object_to_be_fixed, app::MemberInfo_1* member, int64_t object_required))
    IL2CPP_REGISTER_METHOD(0x01EDB260, void, RecordDelayedFixup, (app::ObjectManager * this_ptr, int64_t object_to_be_fixed, app::String* member_name, int64_t object_required))
    IL2CPP_REGISTER_METHOD(0x01EDB480, void, RecordArrayElementFixup, (app::ObjectManager * this_ptr, int64_t array_to_be_fixed, app::Int32__Array* indices, int64_t object_required))
    IL2CPP_REGISTER_METHOD(0x01EDB6A0, void, RaiseDeserializationEvent, (app::ObjectManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EDB6F0, void, AddOnDeserialization, (app::ObjectManager * this_ptr, app::DeserializationEventHandler* handler))
    IL2CPP_REGISTER_METHOD(0x01EDB7B0, void, AddOnDeserialized, (app::ObjectManager * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01EDB8A0, void, RaiseOnDeserializedEvent, (app::ObjectManager * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01EDB990, void, RaiseOnDeserializingEvent, (app::ObjectManager * this_ptr, app::Object* obj))
} // namespace app::classes::System::Runtime::Serialization::ObjectManager
