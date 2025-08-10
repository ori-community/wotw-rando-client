#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListSortDescription.h>
#include <Modloader/app/structs/ListSortDirection__Enum.h>
#include <Modloader/app/structs/PropertyDescriptor.h>

namespace app::classes::System::ComponentModel::ListSortDescription {
    IL2CPP_REGISTER_METHOD(
        0x00CC8D50,
        void,
        ctor,
        app::ListSortDescription* this_ptr,
        app::PropertyDescriptor* property,
        app::ListSortDirection__Enum direction
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::PropertyDescriptor*, get_PropertyDescriptor, app::ListSortDescription* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_PropertyDescriptor, app::ListSortDescription* this_ptr, app::PropertyDescriptor* value)
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::ListSortDirection__Enum, get_SortDirection, app::ListSortDescription* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_SortDirection, app::ListSortDescription* this_ptr, app::ListSortDirection__Enum value)
} // namespace app::classes::System::ComponentModel::ListSortDescription
