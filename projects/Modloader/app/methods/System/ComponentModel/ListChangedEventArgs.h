#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListChangedEventArgs.h>
#include <Modloader/app/structs/ListChangedType__Enum.h>
#include <Modloader/app/structs/PropertyDescriptor.h>

namespace app::classes::System::ComponentModel::ListChangedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01FF49E0, void, ctor_1, (app::ListChangedEventArgs * this_ptr, app::ListChangedType__Enum list_changed_type, int32_t new_index))
    IL2CPP_REGISTER_METHOD(0x01FF4A00, void, ctor_2, (app::ListChangedEventArgs * this_ptr, app::ListChangedType__Enum list_changed_type, int32_t new_index, app::PropertyDescriptor* prop_desc))
    IL2CPP_REGISTER_METHOD(0x01FF4A50, void, ctor_3, (app::ListChangedEventArgs * this_ptr, app::ListChangedType__Enum list_changed_type, app::PropertyDescriptor* prop_desc))
    IL2CPP_REGISTER_METHOD(0x01FF4B00, void, ctor_4, (app::ListChangedEventArgs * this_ptr, app::ListChangedType__Enum list_changed_type, int32_t new_index, int32_t old_index))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::ListChangedType__Enum, get_ListChangedType, (app::ListChangedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_NewIndex, (app::ListChangedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_OldIndex, (app::ListChangedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::PropertyDescriptor*, get_PropertyDescriptor, (app::ListChangedEventArgs * this_ptr))
} // namespace app::classes::System::ComponentModel::ListChangedEventArgs
