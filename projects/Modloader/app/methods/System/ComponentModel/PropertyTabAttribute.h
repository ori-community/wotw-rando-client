#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::PropertyTabAttribute {
    IL2CPP_REGISTER_METHOD(0x029975B0, void, ctor_1, (app::PropertyTabAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02997650, void, ctor_2, (app::PropertyTabAttribute * this_ptr, app::Type* tab_class))
    IL2CPP_REGISTER_METHOD(0x02997780, void, ctor_3, (app::PropertyTabAttribute * this_ptr, app::String* tab_class_name))
    IL2CPP_REGISTER_METHOD(0x029978B0, void, ctor_4, (app::PropertyTabAttribute * this_ptr, app::Type* tab_class, app::PropertyTabScope__Enum tab_scope))
    IL2CPP_REGISTER_METHODINFO(0x0476A9F0, PropertyTabAttribute__ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02997A40, void, ctor_5, (app::PropertyTabAttribute * this_ptr, app::String* tab_class_name, app::PropertyTabScope__Enum tab_scope))
    IL2CPP_REGISTER_METHODINFO(0x04710630, PropertyTabAttribute__ctor_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02997BD0, app::Type__Array*, get_TabClasses, (app::PropertyTabAttribute * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04700C20, PropertyTabAttribute_get_TabClasses__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02998020, app::String__Array*, get_TabClassNames, (app::PropertyTabAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::PropertyTabScope__Enum__Array*, get_TabScopes, (app::PropertyTabAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02998170, bool, Equals_1, (app::PropertyTabAttribute * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x029982A0, bool, Equals_2, (app::PropertyTabAttribute * this_ptr, app::PropertyTabAttribute* other))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::PropertyTabAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02998500, void, InitializeArrays_1, (app::PropertyTabAttribute * this_ptr, app::String__Array* tab_class_names, app::PropertyTabScope__Enum__Array* tab_scopes))
    IL2CPP_REGISTER_METHOD(0x02998520, void, InitializeArrays_2, (app::PropertyTabAttribute * this_ptr, app::Type__Array* tab_classes, app::PropertyTabScope__Enum__Array* tab_scopes))
    IL2CPP_REGISTER_METHOD(0x02998540, void, InitializeArrays_3, (app::PropertyTabAttribute * this_ptr, app::String__Array* tab_class_names, app::Type__Array* tab_classes, app::PropertyTabScope__Enum__Array* tab_scopes))
    IL2CPP_REGISTER_METHODINFO(0x0470AE88, PropertyTabAttribute_InitializeArrays_2__MethodInfo)
} // namespace app::classes::System::ComponentModel::PropertyTabAttribute
