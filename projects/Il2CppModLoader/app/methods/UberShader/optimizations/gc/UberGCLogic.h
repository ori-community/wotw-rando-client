#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberShader::optimizations::gc::UberGCLogic {
    IL2CPP_REGISTER_METHOD(0x01902550, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01902810, void, OnFader, (app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum trigger))
    IL2CPP_REGISTER_METHOD(0x01902960, int32_t, NumForcedCleanupsAfterFaderType, (app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum fader_type))
    IL2CPP_REGISTER_METHOD(0x01902A30, void, OnSceneUnload, ())
    IL2CPP_REGISTER_METHOD(0x01902B10, void, UpdateMemoryProbe, (app::UberGCLogic_MemoryProbeType__Enum type, uint64_t used_bytes))
    IL2CPP_REGISTER_METHOD(0x01902D20, void, ReportRunCleanup, (app::UberGCLogic_CleanupType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01902FE0, bool, ShouldGrowGcHeap, (uint64_t gc_used_before, uint64_t gc_heap_before, uint64_t gc_used_after, uint64_t gc_heap_after))
    IL2CPP_REGISTER_METHOD(0x01903130, bool, ShouldRunCleanup, (app::UberGCLogic_CleanupType__Enum type, app::UberGCLogic_CleanupTrigger__Enum trigger, app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum source))
    IL2CPP_REGISTER_METHOD(0x019038C0, int32_t, GetDesiredProactiveUnloadJobPriority, ())
    IL2CPP_REGISTER_METHOD(0x01903A30, float, GetMemoryProbeMB, (app::UberGCLogic_MemoryProbeType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01903B00, float, SecondsSinceLastCleanup, (app::UberGCLogic_CleanupType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01903C20, int32_t, SceneUnloadsSinceLastCleanup, (app::UberGCLogic_CleanupType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01903CF0, int32_t, FadersDoneSinceLastCleanup, (app::UberGCLogic_CleanupType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01903DC0, float, SecondsSinceLastCheck, (app::UberGCLogic_CleanupType__Enum type, app::UberGCLogic_CleanupTrigger__Enum trigger))
    IL2CPP_REGISTER_METHOD(0x01903F10, float, SecondsSinceLastResourceCollect, ())
    IL2CPP_REGISTER_METHOD(0x01903FF0, int32_t, SceneUnloadsSinceLastResourceCollect, ())
    IL2CPP_REGISTER_METHOD(0x019040D0, int32_t, FadersSinceLastResourceCollect, ())
    IL2CPP_REGISTER_METHOD(0x019041B0, bool, ShouldRunProactiveCleanupOnBlack, (app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum source))
    IL2CPP_REGISTER_METHOD(0x01904620, bool, get_ShouldRunPanicCleanupActiveGameplay, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldRunPanicCleanupFromHint, ())
    IL2CPP_REGISTER_METHOD(0x01904920, bool, get_ShouldRunGcActiveGameplay, ())
    IL2CPP_REGISTER_METHOD(0x01904A90, bool, ShouldRunGcOnBlack, (app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum source))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldRunGcFromHint, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberGCLogic * this_ptr))
}
