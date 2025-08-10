#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WwiseBootstrapInitializer.h>

namespace app::classes::WwiseBootstrapInitializer {
    IL2CPP_REGISTER_METHOD(0x00593430, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x005934D0, void, LoadAudioParent, )
    IL2CPP_REGISTER_METHOD(0x00593680, void, MuteSfxInBootstrapScene, )
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::WwiseBootstrapInitializer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::WwiseBootstrapInitializer
