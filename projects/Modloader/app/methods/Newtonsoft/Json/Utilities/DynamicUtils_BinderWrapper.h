#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CallSiteBinder.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Utilities::DynamicUtils_BinderWrapper {
    IL2CPP_REGISTER_METHOD(0x01C0E4F0, void, Init, )
    IL2CPP_REGISTER_METHOD(0x01C0E6F0, app::Object*, CreateSharpArgumentInfoArray, app::Int32__Array* values)
    IL2CPP_REGISTER_METHOD(0x01C0EA10, void, CreateMemberCalls, )
    IL2CPP_REGISTER_METHOD(0x01C0F020, app::CallSiteBinder*, GetMember, app::String* name, app::Type* context)
    IL2CPP_REGISTER_METHOD(0x01C0F2C0, app::CallSiteBinder*, SetMember, app::String* name, app::Type* context)
} // namespace app::classes::Newtonsoft::Json::Utilities::DynamicUtils_BinderWrapper
