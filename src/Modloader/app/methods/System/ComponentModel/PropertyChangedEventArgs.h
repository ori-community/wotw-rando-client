#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PropertyChangedEventArgs.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::PropertyChangedEventArgs {
    IL2CPP_REGISTER_METHOD(0x02992480, void, ctor, app::PropertyChangedEventArgs* this_ptr, app::String* property_name)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_PropertyName, app::PropertyChangedEventArgs* this_ptr)
} // namespace app::classes::System::ComponentModel::PropertyChangedEventArgs
