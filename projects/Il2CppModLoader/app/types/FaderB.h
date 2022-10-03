#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FaderB {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FaderB__Class** type_info;
        inline app::FaderB__Class* get_class() {
            return il2cpp::get_class<app::FaderB__Class>(type_info, "", "FaderB");
        }
        inline app::FaderB* create() {
            return il2cpp::create_object<app::FaderB>(get_class());
        }
    } // namespace FaderB
} // namespace app::classes::types
