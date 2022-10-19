#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuilderItem_c {
        inline app::BuilderItem_c__Class** type_info = (app::BuilderItem_c__Class**)(modloader::win::memory::resolve_rva(0x0478D920));
        inline app::BuilderItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderItem_c__Class>(type_info, "", "BuilderItem", "<>c");
        }
        inline app::BuilderItem_c* create() {
            return il2cpp::create_object<app::BuilderItem_c>(get_class());
        }
    } // namespace BuilderItem_c
} // namespace app::classes::types
