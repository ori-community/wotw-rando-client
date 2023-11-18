#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PropertyTabAttribute.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyTabScope__Enum.h>
#include <Modloader/app/structs/PropertyTabScope__Enum__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::ComponentModel::PropertyTabAttribute {
    IL2CPP_REGISTER_METHOD(0x029975B0, void, ctor_1, (app::PropertyTabAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02997650, void, ctor_2, (app::PropertyTabAttribute * this_ptr, app::Type* tab_class))
    IL2CPP_REGISTER_METHOD(0x02997780, void, ctor_3, (app::PropertyTabAttribute * this_ptr, app::String* tab_class_name))
    IL2CPP_REGISTER_METHOD(0x029978B0, void, ctor_4, (app::PropertyTabAttribute * this_ptr, app::Type* tab_class, app::PropertyTabScope__Enum tab_scope))
    IL2CPP_REGISTER_METHOD(0x02997A40, void, ctor_5, (app::PropertyTabAttribute * this_ptr, app::String* tab_class_name, app::PropertyTabScope__Enum tab_scope))
    IL2CPP_REGISTER_METHOD(0x02997BD0, app::Type__Array*, get_TabClasses, (app::PropertyTabAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02998020, app::String__Array*, get_TabClassNames, (app::PropertyTabAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::PropertyTabScope__Enum__Array*, get_TabScopes, (app::PropertyTabAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02998170, bool, Equals_1, (app::PropertyTabAttribute * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x029982A0, bool, Equals_2, (app::PropertyTabAttribute * this_ptr, app::PropertyTabAttribute* other))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::PropertyTabAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02998500, void, InitializeArrays_1, (app::PropertyTabAttribute * this_ptr, app::String__Array* tab_class_names, app::PropertyTabScope__Enum__Array* tab_scopes))
    IL2CPP_REGISTER_METHOD(0x02998520, void, InitializeArrays_2, (app::PropertyTabAttribute * this_ptr, app::Type__Array* tab_classes, app::PropertyTabScope__Enum__Array* tab_scopes))
    IL2CPP_REGISTER_METHOD(0x02998540, void, InitializeArrays_3, (app::PropertyTabAttribute * this_ptr, app::String__Array* tab_class_names, app::Type__Array* tab_classes, app::PropertyTabScope__Enum__Array* tab_scopes))
} // namespace app::classes::System::ComponentModel::PropertyTabAttribute
