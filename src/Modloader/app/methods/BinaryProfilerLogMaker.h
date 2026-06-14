#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryProfilerLogMaker.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::BinaryProfilerLogMaker {
    IL2CPP_REGISTER_METHOD(0x00D2A5B0, bool, get_Enabled, )
    IL2CPP_REGISTER_METHOD(0x00D2A660, void, set_Enabled, bool value)
    IL2CPP_REGISTER_METHOD(0x00D2A7E0, void, Awake, app::BinaryProfilerLogMaker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D2A8F0, void, OnDestroy, app::BinaryProfilerLogMaker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D2AA50, app::String*, get_OutputPath, )
    IL2CPP_REGISTER_METHOD(0x00D2AB20, void, Update, app::BinaryProfilerLogMaker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::BinaryProfilerLogMaker* this_ptr)
} // namespace app::classes::BinaryProfilerLogMaker
