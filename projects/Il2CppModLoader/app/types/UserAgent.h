#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserAgent {
        inline app::UserAgent__Class** type_info = (app::UserAgent__Class**)(modloader::win::memory::resolve_rva(0x0474CE58));
        inline app::UserAgent__Class* get_class() {
            return il2cpp::get_class<app::UserAgent__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "UserAgent");
        }
        inline app::UserAgent* create() {
            return il2cpp::create_object<app::UserAgent>(get_class());
        }
    } // namespace UserAgent
} // namespace app::classes::types
