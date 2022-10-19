#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DesiredUberStateGeneric {
        inline app::DesiredUberStateGeneric__Class** type_info = (app::DesiredUberStateGeneric__Class**)(modloader::win::memory::resolve_rva(0x04759970));
        inline app::DesiredUberStateGeneric__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateGeneric__Class>(type_info, "Moon", "DesiredUberStateGeneric");
        }
        inline app::DesiredUberStateGeneric* create() {
            return il2cpp::create_object<app::DesiredUberStateGeneric>(get_class());
        }
    } // namespace DesiredUberStateGeneric
} // namespace app::classes::types
