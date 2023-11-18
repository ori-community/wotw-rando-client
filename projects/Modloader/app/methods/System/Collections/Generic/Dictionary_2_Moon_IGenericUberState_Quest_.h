#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_IGenericUberState_Quest_.h>
#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/Quest.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_IGenericUberState_Quest_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_Moon_IGenericUberState_Quest_ * this_ptr, app::IGenericUberState* key))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::Quest*, get_Item, (app::Dictionary_2_Moon_IGenericUberState_Quest_ * this_ptr, app::IGenericUberState* key))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_Moon_IGenericUberState_Quest_ * this_ptr, app::IGenericUberState* key, app::Quest* value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Moon_IGenericUberState_Quest_ * this_ptr, app::IGenericUberState* key, app::Quest* value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_IGenericUberState_Quest_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_IGenericUberState_Quest_
