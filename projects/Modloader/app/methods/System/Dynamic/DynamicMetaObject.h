#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Dynamic::DynamicMetaObject {
    IL2CPP_REGISTER_METHOD(0x01F8A880, void, ctor_1, (app::DynamicMetaObject * this_ptr, app::Expression* expression, app::BindingRestrictions* restrictions))
    IL2CPP_REGISTER_METHOD(0x01F8A940, void, ctor_2, (app::DynamicMetaObject * this_ptr, app::Expression* expression, app::BindingRestrictions* restrictions, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Expression*, get_Expression, (app::DynamicMetaObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::BindingRestrictions*, get_Restrictions, (app::DynamicMetaObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object*, get_Value, (app::DynamicMetaObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_HasValue, (app::DynamicMetaObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F8A970, app::Type*, get_RuntimeType, (app::DynamicMetaObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F8AA10, app::Type*, get_LimitType, (app::DynamicMetaObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F8AAC0, app::DynamicMetaObject*, BindGetMember, (app::DynamicMetaObject * this_ptr, app::GetMemberBinder* binder))
    IL2CPP_REGISTER_METHOD(0x01F8AB80, app::DynamicMetaObject*, BindSetMember, (app::DynamicMetaObject * this_ptr, app::SetMemberBinder* binder, app::DynamicMetaObject* value))
    IL2CPP_REGISTER_METHOD(0x01F8AC50, app::IEnumerable_1_System_String_*, GetDynamicMemberNames, (app::DynamicMetaObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F8ACD0, app::DynamicMetaObject*, Create, (app::Object * value, app::Expression* expression))
    IL2CPP_REGISTER_METHODINFO(0x0476C218, DynamicMetaObject_Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F8AEE0, void, cctor, ())
} // namespace app::classes::System::Dynamic::DynamicMetaObject
