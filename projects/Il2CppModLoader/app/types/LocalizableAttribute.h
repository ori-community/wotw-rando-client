#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocalizableAttribute {
        inline app::LocalizableAttribute__Class** type_info = (app::LocalizableAttribute__Class**)(modloader::win::memory::resolve_rva(0x04769480));
        inline app::LocalizableAttribute__Class* get_class() {
            return il2cpp::get_class<app::LocalizableAttribute__Class>(type_info, "System.ComponentModel", "LocalizableAttribute");
        }
        inline app::LocalizableAttribute* create() {
            return il2cpp::create_object<app::LocalizableAttribute>(get_class());
        }
    } // namespace LocalizableAttribute
} // namespace app::classes::types
