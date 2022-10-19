#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBabySandWormAutoTarget {
        inline app::IBabySandWormAutoTarget__Class** type_info = (app::IBabySandWormAutoTarget__Class**)(modloader::win::memory::resolve_rva(0x04769468));
        inline app::IBabySandWormAutoTarget__Class* get_class() {
            return il2cpp::get_class<app::IBabySandWormAutoTarget__Class>(type_info, "", "IBabySandWormAutoTarget");
        }
    } // namespace IBabySandWormAutoTarget
} // namespace app::classes::types
