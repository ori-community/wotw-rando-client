#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GardenerItem_c {
        inline app::GardenerItem_c__Class** type_info = (app::GardenerItem_c__Class**)(modloader::win::memory::resolve_rva(0x04774748));
        inline app::GardenerItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GardenerItem_c__Class>(type_info, "", "GardenerItem", "<>c");
        }
        inline app::GardenerItem_c* create() {
            return il2cpp::create_object<app::GardenerItem_c>(get_class());
        }
    } // namespace GardenerItem_c
} // namespace app::classes::types
