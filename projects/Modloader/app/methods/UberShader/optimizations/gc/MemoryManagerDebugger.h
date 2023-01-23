#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MemoryManagerDebugger_MemoryManagerDataCache.h>
#include <Modloader/app/structs/MemoryManagerDebugger.h>

namespace app::classes::UberShader::optimizations::gc::MemoryManagerDebugger {
    IL2CPP_REGISTER_METHOD(0x018FFBA0, app::MemoryManagerDebugger_MemoryManagerDataCache*, get_LastKnownInfo, ())
    IL2CPP_REGISTER_METHOD(0x018FFC40, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x018FFCE0, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x018FFE00, void, Update, ())
    IL2CPP_REGISTER_METHOD(0x018FFFF0, void, InitLocalCache, ())
    IL2CPP_REGISTER_METHOD(0x01900670, void, UpdateCache, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MemoryManagerDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01900B60, void, cctor, ())
} // namespace app::classes::UberShader::optimizations::gc::MemoryManagerDebugger
