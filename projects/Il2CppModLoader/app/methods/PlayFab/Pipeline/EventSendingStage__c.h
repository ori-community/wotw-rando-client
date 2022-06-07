#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayFab::Pipeline::EventSendingStage___c {
    IL2CPP_REGISTER_METHOD(0x017B0BC0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EventSendingStage_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B0D00, app::EventContents *, _OnNextInputItem_b__3_0, (app::EventSendingStage_c * this_ptr, app::PlayFabEmitEventRequest * x))
    IL2CPP_REGISTER_METHODINFO(0x0476A380, EventSendingStage_c__OnNextInputItem_b__3_0__MethodInfo)
}
