#pragma once
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/ITypeDescriptorContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITypeDescriptorContext {
        inline app::ITypeDescriptorContext__Class** type_info() {
            static app::ITypeDescriptorContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITypeDescriptorContext__Class**)(modloader::win::memory::resolve_rva(0x047597C0));
            }
            return cache;
        }
        inline app::ITypeDescriptorContext__Class* get_class() {
            return il2cpp::get_class<app::ITypeDescriptorContext__Class>(type_info(), "System.ComponentModel", "ITypeDescriptorContext");
        }
    } // namespace ITypeDescriptorContext
} // namespace app::classes::types
