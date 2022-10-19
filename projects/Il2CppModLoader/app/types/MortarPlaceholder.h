#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarPlaceholder {
        inline app::MortarPlaceholder__Class** type_info = (app::MortarPlaceholder__Class**)(modloader::win::memory::resolve_rva(0x0474C160));
        inline app::MortarPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MortarPlaceholder__Class>(type_info, "", "MortarPlaceholder");
        }
        inline app::MortarPlaceholder* create() {
            return il2cpp::create_object<app::MortarPlaceholder>(get_class());
        }
    } // namespace MortarPlaceholder
} // namespace app::classes::types
