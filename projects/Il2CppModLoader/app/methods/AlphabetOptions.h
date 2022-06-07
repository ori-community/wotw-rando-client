#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AlphabetOptions {
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::String *, get_CurrentlySelected, (app::AlphabetOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_CurrentlySelected, (app::AlphabetOptions * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x004F6590, void, SetFilteringByPossibleNames, (app::AlphabetOptions * this_ptr, app::List_1_System_String_ * all_names, uint16_t first))
    IL2CPP_REGISTER_METHOD(0x004F6820, void, OnEnable, (app::AlphabetOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F6830, bool, IsAllowed, (app::AlphabetOptions * this_ptr, uint16_t c))
    IL2CPP_REGISTER_METHOD(0x004F6880, void, UpdateItems, (app::AlphabetOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F6C70, void, ctor, (app::AlphabetOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F6D00, void, _UpdateItems_b__11_0, (app::AlphabetOptions * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476FC00, AlphabetOptions__UpdateItems_b__11_0__MethodInfo)
}
