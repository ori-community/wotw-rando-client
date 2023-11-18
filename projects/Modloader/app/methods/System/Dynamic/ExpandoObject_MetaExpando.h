#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpandoObject_MetaExpando.h>
#include <Modloader/app/structs/BindingRestrictions.h>
#include <Modloader/app/structs/DynamicMetaObject.h>
#include <Modloader/app/structs/DynamicMetaObjectBinder.h>
#include <Modloader/app/structs/ExpandoClass.h>
#include <Modloader/app/structs/ExpandoObject.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Func_2_System_Dynamic_DynamicMetaObject_System_Dynamic_DynamicMetaObject_.h>
#include <Modloader/app/structs/GetMemberBinder.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/SetMemberBinder.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Dynamic::ExpandoObject_MetaExpando {
    IL2CPP_REGISTER_METHOD(0x01F90A70, void, ctor, (app::ExpandoObject_MetaExpando * this_ptr, app::Expression* expression, app::ExpandoObject* value))
    IL2CPP_REGISTER_METHOD(0x01F90B70, app::DynamicMetaObject*, BindGetOrInvokeMember, (app::ExpandoObject_MetaExpando * this_ptr, app::DynamicMetaObjectBinder* binder, app::String* name, bool ignore_case, app::DynamicMetaObject* fallback, app::Func_2_System_Dynamic_DynamicMetaObject_System_Dynamic_DynamicMetaObject_* fallback_invoke))
    IL2CPP_REGISTER_METHOD(0x01F91540, app::DynamicMetaObject*, BindGetMember, (app::ExpandoObject_MetaExpando * this_ptr, app::GetMemberBinder* binder))
    IL2CPP_REGISTER_METHOD(0x01F91640, app::DynamicMetaObject*, BindSetMember, (app::ExpandoObject_MetaExpando * this_ptr, app::SetMemberBinder* binder, app::DynamicMetaObject* value))
    IL2CPP_REGISTER_METHOD(0x01F91C10, app::IEnumerable_1_System_String_*, GetDynamicMemberNames, (app::ExpandoObject_MetaExpando * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F91DA0, app::DynamicMetaObject*, AddDynamicTestAndDefer, (app::ExpandoObject_MetaExpando * this_ptr, app::DynamicMetaObjectBinder* binder, app::ExpandoClass* klass, app::ExpandoClass* original_class, app::DynamicMetaObject* succeeds))
    IL2CPP_REGISTER_METHOD(0x01F92290, app::ExpandoClass*, GetClassEnsureIndex, (app::ExpandoObject_MetaExpando * this_ptr, app::String* name, bool case_insensitive, app::ExpandoObject* obj, app::ExpandoClass** klass, int32_t* index))
    IL2CPP_REGISTER_METHOD(0x01F92370, app::Expression*, GetLimitedSelf, (app::ExpandoObject_MetaExpando * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F92480, app::BindingRestrictions*, GetRestrictions, (app::ExpandoObject_MetaExpando * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F92610, app::ExpandoObject*, get_Value, (app::ExpandoObject_MetaExpando * this_ptr))
} // namespace app::classes::System::Dynamic::ExpandoObject_MetaExpando
