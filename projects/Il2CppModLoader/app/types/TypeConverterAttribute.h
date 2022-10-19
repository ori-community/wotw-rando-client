#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeConverterAttribute {
        inline app::TypeConverterAttribute__Class** type_info = (app::TypeConverterAttribute__Class**)(modloader::win::memory::resolve_rva(0x04790090));
        inline app::TypeConverterAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeConverterAttribute__Class>(type_info, "System.ComponentModel", "TypeConverterAttribute");
        }
        inline app::TypeConverterAttribute* create() {
            return il2cpp::create_object<app::TypeConverterAttribute>(get_class());
        }
    } // namespace TypeConverterAttribute
} // namespace app::classes::types
