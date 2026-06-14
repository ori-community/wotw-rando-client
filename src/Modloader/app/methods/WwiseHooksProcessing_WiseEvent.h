#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WwiseHooksProcessing_WiseEvent.h>

namespace app::classes::WwiseHooksProcessing_WiseEvent {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WwiseHooksProcessing_WiseEvent* this_ptr)
}
