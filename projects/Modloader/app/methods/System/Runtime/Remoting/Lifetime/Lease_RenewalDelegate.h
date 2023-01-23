#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Lease_RenewalDelegate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/ILease.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Lease_RenewalDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x014347E0, app::TimeSpan, Invoke, (app::Lease_RenewalDelegate * this_ptr, app::ILease* lease))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Lease_RenewalDelegate * this_ptr, app::ILease* lease, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, app::TimeSpan, EndInvoke, (app::Lease_RenewalDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate
