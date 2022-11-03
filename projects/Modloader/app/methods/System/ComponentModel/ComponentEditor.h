#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::ComponentEditor {
    IL2CPP_REGISTER_METHOD(0x024A9E40, bool, EditComponent, (app::ComponentEditor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ComponentEditor * this_ptr))
} // namespace app::classes::System::ComponentModel::ComponentEditor
