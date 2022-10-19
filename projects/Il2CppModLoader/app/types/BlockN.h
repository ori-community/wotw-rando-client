#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlockN {
        inline app::BlockN__Class** type_info = (app::BlockN__Class**)(modloader::win::memory::resolve_rva(0x04764F38));
        inline app::BlockN__Class* get_class() {
            return il2cpp::get_class<app::BlockN__Class>(type_info, "System.Linq.Expressions", "BlockN");
        }
        inline app::BlockN* create() {
            return il2cpp::create_object<app::BlockN>(get_class());
        }
    } // namespace BlockN
} // namespace app::classes::types
