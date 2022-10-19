#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Pushables {
        inline app::Pushables__Class** type_info = (app::Pushables__Class**)(modloader::win::memory::resolve_rva(0x0472A510));
        inline app::Pushables__Class* get_class() {
            return il2cpp::get_class<app::Pushables__Class>(type_info, "", "Pushables");
        }
        inline app::Pushables* create() {
            return il2cpp::create_object<app::Pushables>(get_class());
        }
    } // namespace Pushables
} // namespace app::classes::types
