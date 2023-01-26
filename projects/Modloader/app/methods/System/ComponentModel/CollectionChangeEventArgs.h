#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CollectionChangeEventArgs.h>
#include <Modloader/app/structs/CollectionChangeAction__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::CollectionChangeEventArgs {
    IL2CPP_REGISTER_METHOD(0x024A84B0, void, ctor, (app::CollectionChangeEventArgs * this_ptr, app::CollectionChangeAction__Enum action, app::Object* element))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::CollectionChangeAction__Enum, get_Action, (app::CollectionChangeEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_Element, (app::CollectionChangeEventArgs * this_ptr))
} // namespace app::classes::System::ComponentModel::CollectionChangeEventArgs
