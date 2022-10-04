#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IReferenceService {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IReferenceService__Class** type_info;
        inline app::IReferenceService__Class* get_class() {
            return il2cpp::get_class<app::IReferenceService__Class>(type_info, "System.ComponentModel.Design", "IReferenceService");
        }
    } // namespace IReferenceService
} // namespace app::classes::types
