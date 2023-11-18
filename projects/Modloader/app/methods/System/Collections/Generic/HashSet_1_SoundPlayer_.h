#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_SoundPlayer_.h>
#include <Modloader/app/structs/SoundPlayer.h>

namespace app::classes::System::Collections::Generic::HashSet_1_SoundPlayer_ {
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_SoundPlayer_ * this_ptr, app::SoundPlayer* item))
    IL2CPP_REGISTER_METHOD(0x02ABEC50, bool, Remove, (app::HashSet_1_SoundPlayer_ * this_ptr, app::SoundPlayer* item))
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, (app::HashSet_1_SoundPlayer_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::HashSet_1_SoundPlayer_
