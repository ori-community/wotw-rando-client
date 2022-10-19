#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITypeDescriptorFilterService {
        inline app::ITypeDescriptorFilterService__Class** type_info = (app::ITypeDescriptorFilterService__Class**)(modloader::win::memory::resolve_rva(0x0472D558));
        inline app::ITypeDescriptorFilterService__Class* get_class() {
            return il2cpp::get_class<app::ITypeDescriptorFilterService__Class>(type_info, "System.ComponentModel.Design", "ITypeDescriptorFilterService");
        }
    } // namespace ITypeDescriptorFilterService
} // namespace app::classes::types
