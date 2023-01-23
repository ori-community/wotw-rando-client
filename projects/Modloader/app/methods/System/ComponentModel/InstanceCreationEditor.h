#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/InstanceCreationEditor.h>

namespace app::classes::System::ComponentModel::InstanceCreationEditor {
    IL2CPP_REGISTER_METHOD(0x01FEEF20, app::String*, get_Text, (app::InstanceCreationEditor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InstanceCreationEditor * this_ptr))
} // namespace app::classes::System::ComponentModel::InstanceCreationEditor
