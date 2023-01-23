#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NvnMemoryDebugger_NvnDataCache.h>
#include <Modloader/app/structs/NvnMemoryDebugger.h>

namespace app::classes::UberShader::optimizations::gc::NvnMemoryDebugger {
    IL2CPP_REGISTER_METHOD(0x01900D80, app::NvnMemoryDebugger_NvnDataCache*, get_LastKnownInfo, ())
    IL2CPP_REGISTER_METHOD(0x01900E20, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x01900EC0, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x01900FE0, void, Update, ())
    IL2CPP_REGISTER_METHOD(0x019011D0, void, InitLocalCache, ())
    IL2CPP_REGISTER_METHOD(0x01901AF0, void, UpdateCache, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NvnMemoryDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01902050, void, cctor, ())
} // namespace app::classes::UberShader::optimizations::gc::NvnMemoryDebugger
