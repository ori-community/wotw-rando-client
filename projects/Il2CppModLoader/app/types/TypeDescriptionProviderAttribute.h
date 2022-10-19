#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeDescriptionProviderAttribute {
        inline app::TypeDescriptionProviderAttribute__Class** type_info = (app::TypeDescriptionProviderAttribute__Class**)(modloader::win::memory::resolve_rva(0x0474A740));
        inline app::TypeDescriptionProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeDescriptionProviderAttribute__Class>(type_info, "System.ComponentModel", "TypeDescriptionProviderAttribute");
        }
        inline app::TypeDescriptionProviderAttribute* create() {
            return il2cpp::create_object<app::TypeDescriptionProviderAttribute>(get_class());
        }
    } // namespace TypeDescriptionProviderAttribute
} // namespace app::classes::types
