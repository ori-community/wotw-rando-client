#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::DataColumnChangeEventArgs {
    IL2CPP_REGISTER_METHOD(0x0239A030, void, ctor_1, (app::DataColumnChangeEventArgs * this_ptr, app::DataRow * row))
    IL2CPP_REGISTER_METHOD(0x0239A0E0, void, ctor_2, (app::DataColumnChangeEventArgs * this_ptr, app::DataRow * row, app::DataColumn * column, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object *, get_ProposedValue, (app::DataColumnChangeEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ProposedValue, (app::DataColumnChangeEventArgs * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0239A1A0, void, InitializeColumnChangeEvent, (app::DataColumnChangeEventArgs * this_ptr, app::DataColumn * column, app::Object * value))
}
