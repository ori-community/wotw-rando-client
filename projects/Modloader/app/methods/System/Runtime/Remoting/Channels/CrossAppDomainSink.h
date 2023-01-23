#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CrossAppDomainSink.h>
#include <Modloader/app/structs/CrossAppDomainSink_ProcessMessageRes.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CADMethodCallMessage.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessageCtrl.h>
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Runtime::Remoting::Channels::CrossAppDomainSink {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::CrossAppDomainSink * this_ptr, int32_t domain_i_d))
    IL2CPP_REGISTER_METHOD(0x01A9EBF0, app::CrossAppDomainSink*, GetSink, (int32_t domain_i_d))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_TargetDomainId, (app::CrossAppDomainSink * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A9F020, app::CrossAppDomainSink_ProcessMessageRes, ProcessMessageInDomain, (app::Byte__Array * arr_request, app::CADMethodCallMessage* cad_msg))
    IL2CPP_REGISTER_METHOD(0x01A9F3E0, app::IMessage*, SyncProcessMessage, (app::CrossAppDomainSink * this_ptr, app::IMessage* msg_request))
    IL2CPP_REGISTER_METHOD(0x01A9F6C0, app::IMessageCtrl*, AsyncProcessMessage, (app::CrossAppDomainSink * this_ptr, app::IMessage* req_msg, app::IMessageSink* reply_sink))
    IL2CPP_REGISTER_METHOD(0x01A9F8F0, void, SendAsyncMessage, (app::CrossAppDomainSink * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x01A9FA00, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01A9FBC0, void, _AsyncProcessMessage_b__10_0, (app::CrossAppDomainSink * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHODINFO(0x04793E58, CrossAppDomainSink__AsyncProcessMessage_b__10_0__MethodInfo)
} // namespace app::classes::System::Runtime::Remoting::Channels::CrossAppDomainSink
