#pragma once
#include <Modloader/app/structs/ITypeDescriptorFilterService.h>
#include <Modloader/app/structs/ITypeDescriptorFilterService__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITypeDescriptorFilterService {
        inline app::ITypeDescriptorFilterService__Class** type_info() {
            static app::ITypeDescriptorFilterService__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITypeDescriptorFilterService__Class**)(modloader::win::memory::resolve_rva(0x0472D558));
            }
            return cache;
        }
        inline app::ITypeDescriptorFilterService__Class* get_class() {
            return il2cpp::get_class<app::ITypeDescriptorFilterService__Class>(type_info(), "System.ComponentModel.Design", "ITypeDescriptorFilterService");
        }
    } // namespace ITypeDescriptorFilterService
} // namespace app::classes::types
