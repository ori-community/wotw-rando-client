#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRChaperoneSetup_CommitWorkingCopy.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EChaperoneConfigFile__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__CommitWorkingCopy {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_CommitWorkingCopy * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x010C4980, bool, Invoke, (app::IVRChaperoneSetup_CommitWorkingCopy * this_ptr, app::EChaperoneConfigFile__Enum config_file))
    IL2CPP_REGISTER_METHOD(0x02F3FF50, app::IAsyncResult*, BeginInvoke, (app::IVRChaperoneSetup_CommitWorkingCopy * this_ptr, app::EChaperoneConfigFile__Enum config_file, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRChaperoneSetup_CommitWorkingCopy * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__CommitWorkingCopy
