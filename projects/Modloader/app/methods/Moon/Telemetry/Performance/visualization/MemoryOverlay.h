#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MemoryOverlay.h>
#include <Modloader/app/structs/Func_1_Int64_.h>
#include <Modloader/app/structs/Func_1_UInt32_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Telemetry::Performance::visualization::MemoryOverlay {
    IL2CPP_REGISTER_METHOD(0x010A5BE0, void, CreateLineMaterial, (app::MemoryOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A5D80, void, OnEndOfFrame, (app::MemoryOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A5D90, void, EnsureImguiRegistered, (app::MemoryOverlay * this_ptr, bool registered))
    IL2CPP_REGISTER_METHOD(0x010A5E90, void, Awake, (app::MemoryOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A6000, void, OnDestroy, (app::MemoryOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A60E0, void, OnEnable, (app::MemoryOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A6350, void, Update, (app::MemoryOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A6430, void, OnDisable, (app::MemoryOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A6660, app::String*, FormatMemory, (app::MemoryOverlay * this_ptr, app::String* format, app::Func_1_Int64_* memory))
    IL2CPP_REGISTER_METHOD(0x010A67C0, app::String*, FormatMemoryUInt, (app::MemoryOverlay * this_ptr, app::String* format, app::Func_1_UInt32_* memory))
    IL2CPP_REGISTER_METHOD(0x010A6910, void, DrawMemoryStat, (app::MemoryOverlay * this_ptr, app::String* name, uint64_t bytes))
    IL2CPP_REGISTER_METHOD(0x010A6A60, void, DrawStringWithInt, (app::MemoryOverlay * this_ptr, app::String* name, int32_t value))
    IL2CPP_REGISTER_METHOD(0x010A6B90, void, DrawMemoryPair, (app::MemoryOverlay * this_ptr, app::String* name, uint64_t min_bytes, uint64_t max_bytes))
    IL2CPP_REGISTER_METHOD(0x010A6D70, void, DrawMemoryTriplet, (app::MemoryOverlay * this_ptr, app::String* name, uint64_t min_bytes, uint64_t max_bytes, int32_t some_count))
    IL2CPP_REGISTER_METHOD(0x010A6FA0, void, DrawDebug, (app::MemoryOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGUI, (app::MemoryOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C8610, void, ctor, (app::MemoryOverlay * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::visualization::MemoryOverlay
