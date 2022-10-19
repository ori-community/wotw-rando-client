#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProvidePropertyAttribute {
        inline app::ProvidePropertyAttribute__Class** type_info = (app::ProvidePropertyAttribute__Class**)(modloader::win::memory::resolve_rva(0x0476C9C8));
        inline app::ProvidePropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::ProvidePropertyAttribute__Class>(type_info, "System.ComponentModel", "ProvidePropertyAttribute");
        }
        inline app::ProvidePropertyAttribute* create() {
            return il2cpp::create_object<app::ProvidePropertyAttribute>(get_class());
        }
    } // namespace ProvidePropertyAttribute
} // namespace app::classes::types
