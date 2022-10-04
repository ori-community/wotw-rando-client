#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITypeDescriptorFilterService {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITypeDescriptorFilterService__Class** type_info;
        inline app::ITypeDescriptorFilterService__Class* get_class() {
            return il2cpp::get_class<app::ITypeDescriptorFilterService__Class>(type_info, "System.ComponentModel.Design", "ITypeDescriptorFilterService");
        }
    } // namespace ITypeDescriptorFilterService
} // namespace app::classes::types
