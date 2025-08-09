#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Type_.h>
#include <Modloader/app/structs/Predicate_1_Object_.h>
#include <Modloader/app/structs/Predicate_1_Type_.h>

namespace app::classes::System::Diagnostics::Contracts::Contract {
    IL2CPP_REGISTER_METHOD(0x01565330, bool, ForAll_1, app::IEnumerable_1_System_Object_* collection, app::Predicate_1_Object_* predicate)
    IL2CPP_REGISTER_METHOD(0x01565330, bool, ForAll_2, app::IEnumerable_1_System_Type_* collection, app::Predicate_1_Type_* predicate)
} // namespace app::classes::System::Diagnostics::Contracts::Contract
