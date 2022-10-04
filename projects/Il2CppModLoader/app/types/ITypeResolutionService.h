#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITypeResolutionService {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITypeResolutionService__Class** type_info;
        inline app::ITypeResolutionService__Class* get_class() {
            return il2cpp::get_class<app::ITypeResolutionService__Class>(type_info, "System.ComponentModel.Design", "ITypeResolutionService");
        }
        inline app::ITypeResolutionService* create() {
            return il2cpp::create_object<app::ITypeResolutionService>(get_class());
        }
    } // namespace ITypeResolutionService
} // namespace app::classes::types
