#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericRegularEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GenericRegularEvent__Class** type_info;
        inline app::GenericRegularEvent__Class* get_class() {
            return il2cpp::get_class<app::GenericRegularEvent__Class>(type_info, "", "GenericRegularEvent");
        }
        inline app::GenericRegularEvent* create() {
            return il2cpp::create_object<app::GenericRegularEvent>(get_class());
        }
    } // namespace GenericRegularEvent
} // namespace app::classes::types
