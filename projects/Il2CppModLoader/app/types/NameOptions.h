#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameOptions {
        inline app::NameOptions__Class** type_info = (app::NameOptions__Class**)(modloader::win::memory::resolve_rva(0x04700A98));
        inline app::NameOptions__Class* get_class() {
            return il2cpp::get_class<app::NameOptions__Class>(type_info, "", "NameOptions");
        }
        inline app::NameOptions* create() {
            return il2cpp::create_object<app::NameOptions>(get_class());
        }
    } // namespace NameOptions
} // namespace app::classes::types
