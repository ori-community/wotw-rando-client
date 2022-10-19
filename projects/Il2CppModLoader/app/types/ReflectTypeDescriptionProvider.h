#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectTypeDescriptionProvider {
        inline app::ReflectTypeDescriptionProvider__Class** type_info = (app::ReflectTypeDescriptionProvider__Class**)(modloader::win::memory::resolve_rva(0x04731358));
        inline app::ReflectTypeDescriptionProvider__Class* get_class() {
            return il2cpp::get_class<app::ReflectTypeDescriptionProvider__Class>(type_info, "System.ComponentModel", "ReflectTypeDescriptionProvider");
        }
        inline app::ReflectTypeDescriptionProvider* create() {
            return il2cpp::create_object<app::ReflectTypeDescriptionProvider>(get_class());
        }
    } // namespace ReflectTypeDescriptionProvider
} // namespace app::classes::types
