#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataErrorsChangedEventArgs.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::DataErrorsChangedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01FDE250, void, ctor, (app::DataErrorsChangedEventArgs * this_ptr, app::String* property_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_PropertyName, (app::DataErrorsChangedEventArgs * this_ptr))
} // namespace app::classes::System::ComponentModel::DataErrorsChangedEventArgs
