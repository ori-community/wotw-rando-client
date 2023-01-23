#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WwiseHooksProcessing.h>

namespace app::classes::WwiseHooksProcessing {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WwiseHooksProcessing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7DA50, void, cctor, ())
} // namespace app::classes::WwiseHooksProcessing
