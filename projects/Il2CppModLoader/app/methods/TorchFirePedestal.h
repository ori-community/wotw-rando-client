#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TorchFirePedestal {
    IL2CPP_REGISTER_METHOD(0x00AFEE70, void, Awake, (app::TorchFirePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFF040, void, OnDestroy, (app::TorchFirePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::TorchFirePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFF210, void, Apply, (app::TorchFirePedestal * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00AFF400, app::IUberState__Array *, get_AffectingUberStates, (app::TorchFirePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFF480, app::List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::TorchFirePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFF6F0, void, OnFlammableStateChange, (app::TorchFirePedestal * this_ptr, app::Flammable * flammable))
    IL2CPP_REGISTER_METHODINFO(0x04737BD8, TorchFirePedestal_OnFlammableStateChange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AFF9D0, bool, CanCharacterInteractModifier, (app::TorchFirePedestal * this_ptr, app::ICharacter * arg))
    IL2CPP_REGISTER_METHOD(0x00AFFA00, void, UpdateStickSpawnerProperties, (app::TorchFirePedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFFB00, void, ctor, (app::TorchFirePedestal * this_ptr))
}
