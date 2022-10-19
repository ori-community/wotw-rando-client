#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InflateBlocks {
        inline app::InflateBlocks__Class** type_info = (app::InflateBlocks__Class**)(modloader::win::memory::resolve_rva(0x047790A8));
        inline app::InflateBlocks__Class* get_class() {
            return il2cpp::get_class<app::InflateBlocks__Class>(type_info, "Ionic.Zlib", "InflateBlocks");
        }
        inline app::InflateBlocks* create() {
            return il2cpp::create_object<app::InflateBlocks>(get_class());
        }
    } // namespace InflateBlocks
} // namespace app::classes::types
