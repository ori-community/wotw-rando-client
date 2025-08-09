#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum.h>
#include <Modloader/app/structs/UberGCLogic_CleanupTrigger__Enum.h>

namespace app::classes::UberGCManager {
    IL2CPP_REGISTER_METHOD(0x013E9690, float, get_AvailableMemory, )
    IL2CPP_REGISTER_METHOD(0x013E9730, float, get_LastPanicCompletionTime, )
    IL2CPP_REGISTER_METHOD(0x013E97D0, float, get_SimplePanicTimegate, )
    IL2CPP_REGISTER_METHOD(0x013E9870, void, set_SimplePanicTimegate, float value)
    IL2CPP_REGISTER_METHOD(0x013E9960, bool, get_EnableAutomaticGC, )
    IL2CPP_REGISTER_METHOD(0x013E99B0, void, set_EnableAutomaticGC, bool value)
    IL2CPP_REGISTER_METHOD(0x013E99C0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x013E9DB0, void, UpdateReservedHeapSize, )
    IL2CPP_REGISTER_METHOD(0x013E9EE0, void, PreallocateHeap, bool preallocate_max_heap, bool fix_block_count)
    IL2CPP_REGISTER_METHOD(0x013EA000, void, OnGameStart, bool automatic_g_c)
    IL2CPP_REGISTER_METHOD(0x013EA2C0, void, ForceResourceCollectDebugOnly, )
    IL2CPP_REGISTER_METHOD(0x013EA3D0, float, get_TimeSinceUnload, )
    IL2CPP_REGISTER_METHOD(0x013EA4C0, void, RunGCDuringLoadingPrewarm, )
    IL2CPP_REGISTER_METHOD(0x013EA560, void, RunGCDebugOnly, )
    IL2CPP_REGISTER_METHOD(0x013EA5F0, void, RunGC, bool is_debug)
    IL2CPP_REGISTER_METHOD(0x013EAE90, void, CollectResourcesIfNeeded, bool force, bool async)
    IL2CPP_REGISTER_METHOD(0x013EB320, void, RefreshAvailableNvnMemoryExpensive, )
    IL2CPP_REGISTER_METHOD(0x013EB4E0, void, UpdateAvailableMemoryForFrameCapture, )
    IL2CPP_REGISTER_METHOD(0x013EB570, void, RefreshAvailableMemory, )
    IL2CPP_REGISTER_METHOD(0x013EB910, void, OnPanicCleanup, )
    IL2CPP_REGISTER_METHOD(0x013EBA60, app::String*, DebugConsumeLastCleanOpportunity, )
    IL2CPP_REGISTER_METHOD(0x013EBB10, void, OnHintPanic, app::String* reason)
    IL2CPP_REGISTER_METHOD(0x013EBD50, void, OnStartTitlescreen, )
    IL2CPP_REGISTER_METHOD(0x013EBE10, void, OnCloseDebugMenu, )
    IL2CPP_REGISTER_METHOD(0x013EBF50, void, OnCleanupOutsideOfGameplayTeleporter, )
    IL2CPP_REGISTER_METHOD(0x013EC0C0, void, OnCleanupOutsideOfGameplay, app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum trigger)
    IL2CPP_REGISTER_METHOD(
        0x013EC240,
        void,
        OnCleanupOutsideOfGameplayInternal,
        app::UberGCLogic_CleanupTrigger__Enum trigger,
        app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum proactive_trigger
    )
    IL2CPP_REGISTER_METHOD(
        0x013EC6A0,
        bool,
        CollectResourcesIfOutOfMem,
        bool allow_ignore_timeout,
        float override_threshold,
        app::UberGCLogic_CleanupTrigger__Enum trigger
    )
    IL2CPP_REGISTER_METHOD(0x013EC7B0, bool, RunGcIfHeapUsageIsBig, app::UberGCLogic_CleanupTrigger__Enum trigger)
    IL2CPP_REGISTER_METHOD(0x013EC8C0, void, Update, )
    IL2CPP_REGISTER_METHOD(0x013ED9C0, float, get_LastPanicTime, )
    IL2CPP_REGISTER_METHOD(0x013EDA70, void, set_LastPanicTime, float value)
    IL2CPP_REGISTER_METHOD(0x013EDB20, void, UpdateLastPanicTime, )
} // namespace app::classes::UberGCManager
