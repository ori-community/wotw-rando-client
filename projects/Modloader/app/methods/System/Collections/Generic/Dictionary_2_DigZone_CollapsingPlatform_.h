#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_DigZone_CollapsingPlatform_.h>
#include <Modloader/app/structs/CollapsingPlatform.h>
#include <Modloader/app/structs/DigZone.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_DigZone_CollapsingPlatform_ {
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_DigZone_CollapsingPlatform_ * this_ptr, app::DigZone* key, app::CollapsingPlatform* value))
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_DigZone_CollapsingPlatform_ * this_ptr, app::DigZone* key))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_DigZone_CollapsingPlatform_ * this_ptr, app::DigZone* key))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::CollapsingPlatform*, get_Item, (app::Dictionary_2_DigZone_CollapsingPlatform_ * this_ptr, app::DigZone* key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_DigZone_CollapsingPlatform_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_DigZone_CollapsingPlatform_
