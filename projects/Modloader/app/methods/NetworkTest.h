#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NetworkTest.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnityWebRequest.h>
#include <Modloader/app/structs/ReplayModel.h>
#include <Modloader/app/structs/GetReplayCallback.h>
#include <Modloader/app/structs/GetReplaysCallback.h>

namespace app::classes::NetworkTest {
    IL2CPP_REGISTER_METHOD(0x0088CA60, void, SubscribeOnRemoteAction, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088CBE0, void, ActionActivated, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A870, NetworkTest_ActionActivated__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0088CEE0, void, StartTimer, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088D000, void, AddReplay, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088D410, void, WipeReplay, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088D740, void, GetReplay, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088DA00, void, GetReplays, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SendTelemetry, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088DCB0, void, StopThread, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088DD40, void, SendTelemetryCoroutine, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, major_poop, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088DE90, void, SendCharacterHeartbeat, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088DFF0, app::IEnumerator*, sendTelemetryCoroutine, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088E130, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0088E1F0, app::String*, get_FullUrl, ())
    IL2CPP_REGISTER_METHOD(0x0088E4B0, app::UnityWebRequest*, CreateRequest, (app::String * body))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintReplay, (app::NetworkTest * this_ptr, app::ReplayModel* replay))
    IL2CPP_REGISTER_METHOD(0x0088E8C0, void, ctor, (app::NetworkTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088E960, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x005F9D80, void, _GetReplay_b__8_0, (app::NetworkTest * this_ptr, app::GetReplayCallback* callback))
    IL2CPP_REGISTER_METHODINFO(0x0478DDC0, NetworkTest__GetReplay_b__8_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0088EA30, void, _GetReplays_b__9_0, (app::NetworkTest * this_ptr, app::GetReplaysCallback* callback))
    IL2CPP_REGISTER_METHODINFO(0x047759E0, NetworkTest__GetReplays_b__9_0__MethodInfo)
} // namespace app::classes::NetworkTest
