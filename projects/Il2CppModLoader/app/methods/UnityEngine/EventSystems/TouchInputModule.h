#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::TouchInputModule {
    IL2CPP_REGISTER_METHOD(0x01F29500, void, ctor, (app::TouchInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F29510, bool, get_allowActivationOnStandalone, (app::TouchInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_allowActivationOnStandalone, (app::TouchInputModule * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01F29510, bool, get_forceModuleActive, (app::TouchInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_forceModuleActive, (app::TouchInputModule * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01F29520, void, UpdateModule, (app::TouchInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F296E0, bool, IsModuleSupported, (app::TouchInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F29730, bool, ShouldActivateModule, (app::TouchInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F29900, bool, UseFakeInput, (app::TouchInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F29940, void, Process, (app::TouchInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F29B40, void, FakeTouches, (app::TouchInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F29D30, void, ProcessTouchEvents, (app::TouchInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F29ED0, void, ProcessTouchPress, (app::TouchInputModule * this_ptr, app::PointerEventData * pointer_event, bool pressed, bool released))
    IL2CPP_REGISTER_METHOD(0x01F27740, void, DeactivateModule, (app::TouchInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2A510, app::String *, ToString, (app::TouchInputModule * this_ptr))
}
