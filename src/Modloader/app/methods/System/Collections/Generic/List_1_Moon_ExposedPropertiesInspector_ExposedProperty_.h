#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExposedProperty.h>
#include <Modloader/app/structs/List_1_Moon_ExposedPropertiesInspector_ExposedProperty_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_ExposedPropertiesInspector_ExposedProperty_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_ExposedPropertiesInspector_ExposedProperty_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_Moon_ExposedPropertiesInspector_ExposedProperty_* this_ptr, app::ExposedProperty* item)
    IL2CPP_REGISTER_METHOD(
        0x02F1EA40,
        void,
        Insert,
        app::List_1_Moon_ExposedPropertiesInspector_ExposedProperty_* this_ptr,
        int32_t index,
        app::ExposedProperty* item
    )
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_Moon_ExposedPropertiesInspector_ExposedProperty_* this_ptr, app::ExposedProperty* item)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_Moon_ExposedPropertiesInspector_ExposedProperty_* this_ptr, app::ExposedProperty* item)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_ExposedPropertiesInspector_ExposedProperty_
