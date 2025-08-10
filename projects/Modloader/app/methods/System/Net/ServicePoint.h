#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BindIPEndPoint.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/EventArgs.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/IPHostEntry.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PooledStream.h>
#include <Modloader/app/structs/ServicePoint.h>
#include <Modloader/app/structs/Socket.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/Version.h>
#include <Modloader/app/structs/WebConnectionGroup.h>
#include <Modloader/app/structs/X509Certificate_1.h>

namespace app::classes::System::Net::ServicePoint {
    IL2CPP_REGISTER_METHOD(0x01BD4A90, void, ctor_1, app::ServicePoint* this_ptr, app::Uri* uri, int32_t connection_limit, int32_t max_idle_time)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Uri*, get_Address, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD4C30, app::Exception*, GetMustImplement, )
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::BindIPEndPoint*, get_BindIPEndPointDelegate, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_BindIPEndPointDelegate, app::ServicePoint* this_ptr, app::BindIPEndPoint* value)
    IL2CPP_REGISTER_METHOD(0x01BD4D70, int32_t, get_ConnectionLeaseTimeout, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD4DB0, void, set_ConnectionLeaseTimeout, app::ServicePoint* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ConnectionLimit, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD4DF0, void, set_ConnectionLimit, app::ServicePoint* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01BD4EA0, app::String*, get_ConnectionName, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_CurrentConnections, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD4EC0, app::DateTime, get_IdleSince, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_MaxIdleTime, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD4ED0, void, set_MaxIdleTime, app::ServicePoint* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Version*, get_ProtocolVersion, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD5050, int32_t, get_ReceiveBufferSize, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD5090, void, set_ReceiveBufferSize, app::ServicePoint* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01BD50D0, bool, get_SupportsPipelining, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD5190, bool, get_Expect100Continue, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00585320, void, set_Expect100Continue, app::ServicePoint* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_UseNagleAlgorithm, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_UseNagleAlgorithm, app::ServicePoint* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01BD51A0, bool, get_SendContinue, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00585320, void, set_SendContinue, app::ServicePoint* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01BD5300, void, SetTcpKeepAlive, app::ServicePoint* this_ptr, bool enabled, int32_t keep_alive_time, int32_t keep_alive_interval)
    IL2CPP_REGISTER_METHOD(0x01BD5420, void, KeepAliveSetup, app::ServicePoint* this_ptr, app::Socket* socket)
    IL2CPP_REGISTER_METHOD(0x01BD5680, void, PutBytes, app::Byte__Array* bytes, uint32_t v, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_UsesProxy, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_UsesProxy, app::ServicePoint* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_UseConnect, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DFE810, void, set_UseConnect, app::ServicePoint* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01BD5890, app::WebConnectionGroup*, GetConnectionGroup, app::ServicePoint* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01BD5D30, void, RemoveConnectionGroup, app::ServicePoint* this_ptr, app::WebConnectionGroup* group)
    IL2CPP_REGISTER_METHOD(0x01BD5E10, bool, CheckAvailableForRecycling, app::ServicePoint* this_ptr, app::DateTime* out_idle_since)
    IL2CPP_REGISTER_METHOD(0x01BD65A0, void, IdleTimerCallback, app::ServicePoint* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01BD65C0, bool, get_HasTimedOut, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD6780, app::IPHostEntry*, get_HostEntry, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, SetVersion, app::ServicePoint* this_ptr, app::Version* version)
    IL2CPP_REGISTER_METHOD(0x01BD6C10, app::EventHandler*, SendRequest, app::ServicePoint* this_ptr, app::HttpWebRequest* request, app::String* group_name)
    IL2CPP_REGISTER_METHOD(0x01BD6F90, bool, CloseConnectionGroup, app::ServicePoint* this_ptr, app::String* connection_group_name)
    IL2CPP_REGISTER_METHOD(0x01BD70C0, app::X509Certificate_1*, get_Certificate, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD7300, void, UpdateServerCertificate, app::ServicePoint* this_ptr, app::X509Certificate_1* certificate)
    IL2CPP_REGISTER_METHOD(0x01BD7340, app::X509Certificate_1*, get_ClientCertificate, app::ServicePoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BD7580, void, UpdateClientCertificate, app::ServicePoint* this_ptr, app::X509Certificate_1* certificate)
    IL2CPP_REGISTER_METHOD(0x01BD75C0, bool, CallEndPointDelegate, app::ServicePoint* this_ptr, app::Socket* sock, app::IPEndPoint* remote)
    IL2CPP_REGISTER_METHOD(
        0x01BD7710,
        app::Socket*,
        GetConnection,
        app::ServicePoint* this_ptr,
        app::PooledStream* pooled_stream,
        app::Object* owner,
        bool async,
        app::IPAddress** address,
        app::Socket** abort_socket,
        app::Socket** abort_socket6
    )
    IL2CPP_REGISTER_METHOD(0x01BD7760, void, _GetConnectionGroup_b__66_0, app::ServicePoint* this_ptr, app::Object* s, app::EventArgs* e)
    IL2CPP_REGISTER_METHOD(0x01BD7770, void, ctor_2, app::ServicePoint* this_ptr)
} // namespace app::classes::System::Net::ServicePoint
