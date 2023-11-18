#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonPropertyCollection.h>
#include <Modloader/app/structs/CallSite_1_System_Func_3_.h>
#include <Modloader/app/structs/CallSite_1_System_Func_4_.h>
#include <Modloader/app/structs/Func_2_String_String_.h>
#include <Modloader/app/structs/IDynamicMetaObjectProvider.h>
#include <Modloader/app/structs/JsonDynamicContract.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonDynamicContract {
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::JsonPropertyCollection*, get_Properties, (app::JsonDynamicContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::Func_2_String_String_*, get_PropertyNameResolver, (app::JsonDynamicContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_PropertyNameResolver, (app::JsonDynamicContract * this_ptr, app::Func_2_String_String_* value))
    IL2CPP_REGISTER_METHOD(0x01870D40, app::CallSite_1_System_Func_3_*, CreateCallSiteGetter, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x01870FC0, app::CallSite_1_System_Func_4_*, CreateCallSiteSetter, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x01871240, void, ctor, (app::JsonDynamicContract * this_ptr, app::Type* underlying_type))
    IL2CPP_REGISTER_METHOD(0x01871710, bool, TryGetMember, (app::JsonDynamicContract * this_ptr, app::IDynamicMetaObjectProvider* dynamic_provider, app::String* name, app::Object** value))
    IL2CPP_REGISTER_METHOD(0x01871880, bool, TrySetMember, (app::JsonDynamicContract * this_ptr, app::IDynamicMetaObjectProvider* dynamic_provider, app::String* name, app::Object* value))
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonDynamicContract
