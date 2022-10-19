#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UriBuilder {
        inline app::UriBuilder__Class** type_info = (app::UriBuilder__Class**)(modloader::win::memory::resolve_rva(0x0475E208));
        inline app::UriBuilder__Class* get_class() {
            return il2cpp::get_class<app::UriBuilder__Class>(type_info, "System", "UriBuilder");
        }
        inline app::UriBuilder* create() {
            return il2cpp::create_object<app::UriBuilder>(get_class());
        }
    } // namespace UriBuilder
} // namespace app::classes::types
