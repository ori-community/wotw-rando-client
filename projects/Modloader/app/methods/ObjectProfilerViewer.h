#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectProfilerViewer.h>

namespace app::classes::ObjectProfilerViewer {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_Enabled, )
    IL2CPP_REGISTER_METHOD(0x0060F2F0, void, set_Enabled, bool value)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ObjectProfilerViewer* this_ptr)
} // namespace app::classes::ObjectProfilerViewer
