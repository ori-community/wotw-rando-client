#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GraphicsJobsSyncPoint__Enum.h>
#include <Modloader/app/structs/WaitForPresentSyncPoint__Enum.h>

namespace app::classes::UnityEngine::Experimental::Rendering::GraphicsDeviceSettings {
    IL2CPP_REGISTER_METHOD(0x00491640, app::WaitForPresentSyncPoint__Enum, get_waitForPresentSyncPoint, )
    IL2CPP_REGISTER_METHOD(0x02433E40, void, set_waitForPresentSyncPoint, app::WaitForPresentSyncPoint__Enum value)
    IL2CPP_REGISTER_METHOD(0x004915A0, app::GraphicsJobsSyncPoint__Enum, get_graphicsJobsSyncPoint, )
    IL2CPP_REGISTER_METHOD(0x02433E90, void, set_graphicsJobsSyncPoint, app::GraphicsJobsSyncPoint__Enum value)
    IL2CPP_REGISTER_METHOD(0x00492630, bool, get_enableRenderThreadOptimizations, )
    IL2CPP_REGISTER_METHOD(0x02433EE0, void, set_enableRenderThreadOptimizations, bool value)
    IL2CPP_REGISTER_METHOD(0x004926D0, bool, get_enableUseLargestCb, )
    IL2CPP_REGISTER_METHOD(0x02433F30, void, set_enableUseLargestCb, bool value)
    IL2CPP_REGISTER_METHOD(0x00492770, bool, get_enableSingleCopyCb, )
    IL2CPP_REGISTER_METHOD(0x02433F80, void, set_enableSingleCopyCb, bool value)
    IL2CPP_REGISTER_METHOD(0x00492810, bool, get_propertyLocCache, )
    IL2CPP_REGISTER_METHOD(0x02433FD0, void, set_propertyLocCache, bool value)
    IL2CPP_REGISTER_METHOD(0x004928B0, bool, get_SetTLCCBOnce, )
    IL2CPP_REGISTER_METHOD(0x02434020, void, set_SetTLCCBOnce, bool value)
    IL2CPP_REGISTER_METHOD(0x00492950, bool, get_EnableRTProfiling, )
    IL2CPP_REGISTER_METHOD(0x02434070, void, set_EnableRTProfiling, bool value)
    IL2CPP_REGISTER_METHOD(0x00E3D370, bool, get_EnableGfxJobsQueue, )
    IL2CPP_REGISTER_METHOD(0x024340C0, void, set_EnableGfxJobsQueue, bool value)
    IL2CPP_REGISTER_METHOD(0x004929F0, bool, get_EnableJobsThreshold, )
    IL2CPP_REGISTER_METHOD(0x02434110, void, set_EnableJobsThreshold, bool value)
    IL2CPP_REGISTER_METHOD(0x00492A90, int32_t, get_JobsThreshold, )
    IL2CPP_REGISTER_METHOD(0x02434160, void, set_JobsThreshold, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00492D90, bool, get_SkipStateChanges, )
    IL2CPP_REGISTER_METHOD(0x024341B0, void, set_SkipStateChanges, bool value)
    IL2CPP_REGISTER_METHOD(0x00492B30, bool, get_EnablePreparePrewarm, )
    IL2CPP_REGISTER_METHOD(0x02434200, void, set_EnablePreparePrewarm, bool value)
    IL2CPP_REGISTER_METHOD(0x02434250, bool, get_ClearKeywords, )
    IL2CPP_REGISTER_METHOD(0x024342A0, void, set_ClearKeywords, bool value)
    IL2CPP_REGISTER_METHOD(0x024342F0, bool, get_ClearSavedProps, )
    IL2CPP_REGISTER_METHOD(0x02434340, void, set_ClearSavedProps, bool value)
} // namespace app::classes::UnityEngine::Experimental::Rendering::GraphicsDeviceSettings
