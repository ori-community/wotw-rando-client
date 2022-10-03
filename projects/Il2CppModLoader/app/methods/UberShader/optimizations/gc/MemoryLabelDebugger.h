#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberShader::optimizations::gc::MemoryLabelDebugger {
    IL2CPP_REGISTER_METHOD(0x018FDB20, app::MemoryLabelDebugger_MemoryManagerDataCache*, get_LastKnownInfo, ())
    IL2CPP_REGISTER_METHOD(0x018FDBC0, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x018FDC60, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x018FDD80, void, Update, ())
    IL2CPP_REGISTER_METHOD(0x018FDF70, void, InitLocalCache, ())
    IL2CPP_REGISTER_METHOD(0x018FE9B0, void, UpdateCache, ())
    IL2CPP_REGISTER_METHOD(0x018FEDA0, void, WriteCSV, (app::String * output_file))
    IL2CPP_REGISTER_METHOD(0x018FF660, int32_t, GetIndexForLabelName, (app::String * label))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MemoryLabelDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018FF8E0, void, cctor, ())
} // namespace app::classes::UberShader::optimizations::gc::MemoryLabelDebugger
