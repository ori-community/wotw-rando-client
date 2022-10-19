#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttributeProviderAttribute {
        inline app::AttributeProviderAttribute__Class** type_info = (app::AttributeProviderAttribute__Class**)(modloader::win::memory::resolve_rva(0x04716158));
        inline app::AttributeProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::AttributeProviderAttribute__Class>(type_info, "System.ComponentModel", "AttributeProviderAttribute");
        }
        inline app::AttributeProviderAttribute* create() {
            return il2cpp::create_object<app::AttributeProviderAttribute>(get_class());
        }
    } // namespace AttributeProviderAttribute
} // namespace app::classes::types
