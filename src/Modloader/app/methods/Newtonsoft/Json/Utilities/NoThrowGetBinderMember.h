#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicMetaObject.h>
#include <Modloader/app/structs/GetMemberBinder.h>
#include <Modloader/app/structs/NoThrowGetBinderMember.h>

namespace app::classes::Newtonsoft::Json::Utilities::NoThrowGetBinderMember {
    IL2CPP_REGISTER_METHOD(0x0301EDB0, void, ctor, app::NoThrowGetBinderMember* this_ptr, app::GetMemberBinder* inner_binder)
    IL2CPP_REGISTER_METHOD(
        0x0301EE80,
        app::DynamicMetaObject*,
        FallbackGetMember,
        app::NoThrowGetBinderMember* this_ptr,
        app::DynamicMetaObject* target,
        app::DynamicMetaObject* error_suggestion
    )
} // namespace app::classes::Newtonsoft::Json::Utilities::NoThrowGetBinderMember
