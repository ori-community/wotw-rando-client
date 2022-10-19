#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultValueAttribute {
        inline app::DefaultValueAttribute__Class** type_info = (app::DefaultValueAttribute__Class**)(modloader::win::memory::resolve_rva(0x04769598));
        inline app::DefaultValueAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultValueAttribute__Class>(type_info, "System.ComponentModel", "DefaultValueAttribute");
        }
        inline app::DefaultValueAttribute* create() {
            return il2cpp::create_object<app::DefaultValueAttribute>(get_class());
        }
    } // namespace DefaultValueAttribute
} // namespace app::classes::types
