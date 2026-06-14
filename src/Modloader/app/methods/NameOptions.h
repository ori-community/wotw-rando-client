#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/NameOptions.h>
#include <Modloader/app/structs/NameOptions_NameDatabase.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::NameOptions {
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::String*, get_FirstLetter, app::NameOptions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_FirstLetter, app::NameOptions* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String*, get_SecondLetter, app::NameOptions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_SecondLetter, app::NameOptions* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::String*, get_CurrentlySelected, app::NameOptions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_CurrentlySelected, app::NameOptions* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::List_1_System_String_*, get_UnavailableNames, app::NameOptions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_UnavailableNames, app::NameOptions* this_ptr, app::List_1_System_String_* value)
    IL2CPP_REGISTER_METHOD(0x00882390, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00882410, void, OnEnable, app::NameOptions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00882C40, app::NameOptions_NameDatabase*, get_Database, )
    IL2CPP_REGISTER_METHOD(0x00882DA0, app::NameOptions_NameDatabase*, LoadDatabase, )
    IL2CPP_REGISTER_METHOD(0x00882E80, void, ctor, app::NameOptions* this_ptr)
} // namespace app::classes::NameOptions
