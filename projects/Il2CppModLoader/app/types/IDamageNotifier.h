#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDamageNotifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDamageNotifier__Class** type_info;
        inline app::IDamageNotifier__Class* get_class() {
            return il2cpp::get_class<app::IDamageNotifier__Class>(type_info, "", "IDamageNotifier");
        }
        inline app::IDamageNotifier* create() {
            return il2cpp::create_object<app::IDamageNotifier>(get_class());
        }
    } // namespace IDamageNotifier
} // namespace app::classes::types
