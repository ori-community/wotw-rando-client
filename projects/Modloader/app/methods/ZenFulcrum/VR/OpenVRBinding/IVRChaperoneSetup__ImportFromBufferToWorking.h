#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRChaperoneSetup_ImportFromBufferToWorking.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__ImportFromBufferToWorking {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_ImportFromBufferToWorking * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x023CD700, bool, Invoke, (app::IVRChaperoneSetup_ImportFromBufferToWorking * this_ptr, app::String* p_buffer, uint32_t n_import_flags))
    IL2CPP_REGISTER_METHOD(0x02F408A0, app::IAsyncResult*, BeginInvoke, (app::IVRChaperoneSetup_ImportFromBufferToWorking * this_ptr, app::String* p_buffer, uint32_t n_import_flags, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRChaperoneSetup_ImportFromBufferToWorking * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__ImportFromBufferToWorking
