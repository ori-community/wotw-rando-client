#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Frapser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Frapser__Class** type_info;
        inline app::Frapser__Class* get_class() {
            return il2cpp::get_class<app::Frapser__Class>(type_info, "", "Frapser");
        }
        inline app::Frapser* create() {
            return il2cpp::create_object<app::Frapser>(get_class());
        }
    } // namespace Frapser
} // namespace app::classes::types
