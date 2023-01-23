#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BidirectionalDictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/DefaultReferenceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Serialization::DefaultReferenceResolver {
    IL2CPP_REGISTER_METHOD(0x0186A530, app::BidirectionalDictionary_2_System_String_System_Object_*, GetMappings, (app::DefaultReferenceResolver * this_ptr, app::Object* context))
    IL2CPP_REGISTER_METHODINFO(0x047106C8, DefaultReferenceResolver_GetMappings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0186A690, app::Object*, ResolveReference, (app::DefaultReferenceResolver * this_ptr, app::Object* context, app::String* reference))
    IL2CPP_REGISTER_METHOD(0x0186A7A0, app::String*, GetReference, (app::DefaultReferenceResolver * this_ptr, app::Object* context, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0186A920, void, AddReference, (app::DefaultReferenceResolver * this_ptr, app::Object* context, app::String* reference, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0186A9E0, bool, IsReferenced, (app::DefaultReferenceResolver * this_ptr, app::Object* context, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DefaultReferenceResolver * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Serialization::DefaultReferenceResolver
