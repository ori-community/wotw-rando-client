#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUberStateGroup {
        inline app::IUberStateGroup__Class** type_info = (app::IUberStateGroup__Class**)(modloader::win::memory::resolve_rva(0x0471FA68));
        inline app::IUberStateGroup__Class* get_class() {
            return il2cpp::get_class<app::IUberStateGroup__Class>(type_info, "Moon", "IUberStateGroup");
        }
    } // namespace IUberStateGroup
} // namespace app::classes::types
