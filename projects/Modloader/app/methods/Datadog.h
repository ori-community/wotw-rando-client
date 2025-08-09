#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Datadog.h>
#include <Modloader/app/structs/DatadogEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SslPolicyErrors__Enum.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Chain.h>

namespace app::classes::Datadog {
    IL2CPP_REGISTER_METHOD(0x02E8ECB0, app::Datadog*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnsureBestHttpInitialized, )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        MyRemoteCertificateValidationCallback,
        app::Object* sender,
        app::X509Certificate_1* certificate,
        app::X509Chain* chain,
        app::SslPolicyErrors__Enum sslpolicyerrors
    )
    IL2CPP_REGISTER_METHOD(0x02E8EF00, void, OnUpdate, )
    IL2CPP_REGISTER_METHOD(0x02E8EFB0, void, CleanUpJobs, app::Datadog* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E8F120, void, ClearJobs, app::Datadog* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E8F330, app::Datadog*, InitializeDatadog, )
    IL2CPP_REGISTER_METHOD(0x02E8F470, void, Post, app::DatadogEvent* evt)
    IL2CPP_REGISTER_METHOD(0x02E8F4E0, void, QueueRequest, app::Datadog* this_ptr, app::DatadogEvent* payload)
    IL2CPP_REGISTER_METHOD(0x02E8F820, int32_t, GetThresholdIndex, app::Datadog* this_ptr, int32_t hash, int64_t now_time)
    IL2CPP_REGISTER_METHOD(0x02E8FA70, bool, CheckThreshold, app::Datadog* this_ptr, int32_t hash)
    IL2CPP_REGISTER_METHOD(0x02E8FD10, void, ExecuteRequest, app::Datadog* this_ptr, app::DatadogEvent* payload)
    IL2CPP_REGISTER_METHOD(0x02E8FD50, void, ctor, app::Datadog* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E8FFD0, void, cctor, )
} // namespace app::classes::Datadog
