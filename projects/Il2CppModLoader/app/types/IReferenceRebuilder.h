#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IReferenceRebuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IReferenceRebuilder__Class** type_info;
        inline app::IReferenceRebuilder__Class* get_class() {
            return il2cpp::get_class<app::IReferenceRebuilder__Class>(type_info, "", "IReferenceRebuilder");
        }
    } // namespace IReferenceRebuilder
} // namespace app::classes::types
