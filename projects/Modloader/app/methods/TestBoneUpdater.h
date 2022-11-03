#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TestBoneUpdater {
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnEnable, (app::TestBoneUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D9730, void, Start, (app::TestBoneUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D99E0, void, SetInitialPostions, (app::TestBoneUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D9E40, void, Update, (app::TestBoneUpdater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DA340, void, ctor, (app::TestBoneUpdater * this_ptr))
} // namespace app::classes::TestBoneUpdater
