#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::AddingNewEventArgs {
    IL2CPP_REGISTER_METHOD(0x0249EC00, void, ctor_1, (app::AddingNewEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0249EC90, void, ctor_2, (app::AddingNewEventArgs * this_ptr, app::Object * new_object))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object *, get_NewObject, (app::AddingNewEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_NewObject, (app::AddingNewEventArgs * this_ptr, app::Object * value))
}
