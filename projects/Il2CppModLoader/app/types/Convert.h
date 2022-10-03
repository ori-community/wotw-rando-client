#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Convert {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Convert__Class** type_info;
        inline app::Convert__Class* get_class() {
            return il2cpp::get_class<app::Convert__Class>(type_info, "System", "Convert");
        }
        inline app::Convert* create() {
            return il2cpp::create_object<app::Convert>(get_class());
        }
    } // namespace Convert
} // namespace app::classes::types
