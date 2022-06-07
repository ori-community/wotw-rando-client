#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CheatsHandler {
    IL2CPP_REGISTER_METHOD(0x0131C6E0, bool, CanUseCheats, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047716A0, CheatsHandler_CanUseCheats__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0131C7F0, bool, IsInsideRainbowZone, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0131C880, void, ChangeCharacterColor, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0131CAF0, void, MakeDashRainbow, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0131CB90, void, TeleportOri, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0131CE30, bool, CanActivateInfiniteDoubleJumps, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0131CF10, void, Awake, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0131E2C0, app::IEnumerator *, InitDebugMenu, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0131E400, void, OnDestroy, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0131E590, void, OnGameReset, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717BA0, CheatsHandler_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0131E670, void, Update, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0131EA70, void, ActivateDebug, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0131EB40, void, ActivateDebugMenu, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794618, CheatsHandler_ActivateDebugMenu__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012CBAC0, void, Serialize, (app::CheatsHandler * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x0131EC00, void, ctor, (app::CheatsHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
