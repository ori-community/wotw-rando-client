#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BindingRestrictions.h>
#include <Modloader/app/structs/BindingRestrictions_BindingRestrictionsProxy.h>
#include <Modloader/app/structs/BindingRestrictions__Array.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Dynamic::BindingRestrictions_BindingRestrictionsProxy {
    IL2CPP_REGISTER_METHOD(0x01F88CD0, void, ctor, app::BindingRestrictions_BindingRestrictionsProxy* this_ptr, app::BindingRestrictions* node)
    IL2CPP_REGISTER_METHOD(0x01F88D70, bool, get_IsEmpty, app::BindingRestrictions_BindingRestrictionsProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::Expression*, get_Test, app::BindingRestrictions_BindingRestrictionsProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F88E20, app::BindingRestrictions__Array*, get_Restrictions, app::BindingRestrictions_BindingRestrictionsProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F890E0, app::String*, ToString, app::BindingRestrictions_BindingRestrictionsProxy* this_ptr)
} // namespace app::classes::System::Dynamic::BindingRestrictions_BindingRestrictionsProxy
