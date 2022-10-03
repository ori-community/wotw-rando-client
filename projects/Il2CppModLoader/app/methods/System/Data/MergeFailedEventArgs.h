#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::MergeFailedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01E40F10, void, ctor, (app::MergeFailedEventArgs * this_ptr, app::DataTable* table, app::String* conflict))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Conflict, (app::MergeFailedEventArgs * this_ptr))
} // namespace app::classes::System::Data::MergeFailedEventArgs
