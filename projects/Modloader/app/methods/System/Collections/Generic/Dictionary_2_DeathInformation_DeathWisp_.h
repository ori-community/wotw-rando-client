#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeathInformation.h>
#include <Modloader/app/structs/DeathWisp.h>
#include <Modloader/app/structs/Dictionary_2_DeathInformation_DeathWisp_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_DeathInformation_DeathWisp_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_DeathInformation_DeathWisp_ {
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_DeathInformation_DeathWisp_*,
        get_Values,
        app::Dictionary_2_DeathInformation_DeathWisp_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_DeathInformation_DeathWisp_* this_ptr, app::DeathInformation* key)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::DeathWisp*, get_Item, app::Dictionary_2_DeathInformation_DeathWisp_* this_ptr, app::DeathInformation* key)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_DeathInformation_DeathWisp_* this_ptr, app::DeathInformation* key, app::DeathWisp* value)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, app::Dictionary_2_DeathInformation_DeathWisp_* this_ptr, app::DeathInformation* key)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_DeathInformation_DeathWisp_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_DeathInformation_DeathWisp_
