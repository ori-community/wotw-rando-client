#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArtificialSoundHost.h>
#include <Modloader/app/structs/WwiseGameObjectSystem_c.h>

namespace app::classes::Moon::Wwise::WwiseGameObjectSystem___c {
    IL2CPP_REGISTER_METHOD(0x02715FB0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WwiseGameObjectSystem_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027160F0, bool, _PrintState_b__7_0, app::WwiseGameObjectSystem_c* this_ptr, app::ArtificialSoundHost* s)
} // namespace app::classes::Moon::Wwise::WwiseGameObjectSystem___c
