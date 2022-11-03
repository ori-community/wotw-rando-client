#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITypeDescriptorContext {
        inline app::ITypeDescriptorContext__Class** type_info = (app::ITypeDescriptorContext__Class**)(modloader::win::memory::resolve_rva(0x047597C0));
        inline app::ITypeDescriptorContext__Class* get_class() {
            return il2cpp::get_class<app::ITypeDescriptorContext__Class>(type_info, "System.ComponentModel", "ITypeDescriptorContext");
        }
    } // namespace ITypeDescriptorContext
} // namespace app::classes::types
