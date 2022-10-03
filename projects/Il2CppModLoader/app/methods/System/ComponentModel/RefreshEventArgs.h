#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::RefreshEventArgs {
    IL2CPP_REGISTER_METHOD(0x029ABBD0, void, ctor_1, (app::RefreshEventArgs * this_ptr, app::Object* component_changed))
    IL2CPP_REGISTER_METHOD(0x029ABC90, void, ctor_2, (app::RefreshEventArgs * this_ptr, app::Type* type_changed))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_ComponentChanged, (app::RefreshEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Type*, get_TypeChanged, (app::RefreshEventArgs * this_ptr))
} // namespace app::classes::System::ComponentModel::RefreshEventArgs
