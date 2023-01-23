#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReplayServer.h>
#include <Modloader/app/structs/List_1_ServerObject_.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ReplayServer {
    IL2CPP_REGISTER_METHOD(0x008FF6A0, void, Awake, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FF700, void, Start, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FFAC0, void, Update, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FFBA0, void, InitServer, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FFBB0, void, ListenToIncommingConnections, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FFE30, void, StartReceiving, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00900080, void, ProcessClientRequests, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477D370, ReplayServer_ProcessClientRequests__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00900360, void, ProcessSerializableObjectMessage, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009004E0, void, OnClientDisconnect, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009005D0, void, Simulate, (app::ReplayServer * this_ptr, app::List_1_ServerObject_* objs))
    IL2CPP_REGISTER_METHOD(0x009011A0, void, OnEndRecording, (app::ReplayServer * this_ptr, app::Byte__Array* ghost_recorder_data))
    IL2CPP_REGISTER_METHODINFO(0x0476B598, ReplayServer_OnEndRecording__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009012D0, void, SendSerializableObjectToCLient, (app::ReplayServer * this_ptr, app::Object* serializable_obj))
    IL2CPP_REGISTER_METHODINFO(0x047199A8, ReplayServer_SendSerializableObjectToCLient__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00901400, void, OnDisable, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00901400, void, ShutDownServer, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00901430, void, RestartServer, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00901460, void, InsertServerLog, (app::String * log_message))
    IL2CPP_REGISTER_METHOD(0x009015B0, void, OnGUI, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ReplayServer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00901770, void, cctor, ())
} // namespace app::classes::ReplayServer
