#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBabyWormAutoTarget {
        inline app::IBabyWormAutoTarget__Class** type_info = (app::IBabyWormAutoTarget__Class**)(modloader::win::memory::resolve_rva(0x0475B648));
        inline app::IBabyWormAutoTarget__Class* get_class() {
            return il2cpp::get_class<app::IBabyWormAutoTarget__Class>(type_info, "", "IBabyWormAutoTarget");
        }
    } // namespace IBabyWormAutoTarget
} // namespace app::classes::types
