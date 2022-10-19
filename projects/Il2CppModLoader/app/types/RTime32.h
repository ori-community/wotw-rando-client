#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RTime32 {
        inline app::RTime32__Class** type_info = (app::RTime32__Class**)(modloader::win::memory::resolve_rva(0x0478DC50));
        inline app::RTime32__Class* get_class() {
            return il2cpp::get_class<app::RTime32__Class>(type_info, "Steamworks", "RTime32");
        }
        inline app::RTime32* create() {
            return il2cpp::create_object<app::RTime32>(get_class());
        }
        inline app::RTime32__Boxed* box(app::RTime32 value) {
            return il2cpp::box_value<app::RTime32__Boxed>(get_class(), value);
        }
    } // namespace RTime32
} // namespace app::classes::types
