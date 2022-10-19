#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IByteUberState {
        inline app::IByteUberState__Class** type_info = (app::IByteUberState__Class**)(modloader::win::memory::resolve_rva(0x04734950));
        inline app::IByteUberState__Class* get_class() {
            return il2cpp::get_class<app::IByteUberState__Class>(type_info, "Moon", "IByteUberState");
        }
    } // namespace IByteUberState
} // namespace app::classes::types
