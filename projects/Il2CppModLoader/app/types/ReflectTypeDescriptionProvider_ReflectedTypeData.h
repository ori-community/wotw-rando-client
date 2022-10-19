#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectTypeDescriptionProvider_ReflectedTypeData {
        inline app::ReflectTypeDescriptionProvider_ReflectedTypeData__Class** type_info = (app::ReflectTypeDescriptionProvider_ReflectedTypeData__Class**)(modloader::win::memory::resolve_rva(0x0477BB08));
        inline app::ReflectTypeDescriptionProvider_ReflectedTypeData__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectTypeDescriptionProvider_ReflectedTypeData__Class>(type_info, "System.ComponentModel", "ReflectTypeDescriptionProvider", "ReflectedTypeData");
        }
        inline app::ReflectTypeDescriptionProvider_ReflectedTypeData* create() {
            return il2cpp::create_object<app::ReflectTypeDescriptionProvider_ReflectedTypeData>(get_class());
        }
    } // namespace ReflectTypeDescriptionProvider_ReflectedTypeData
} // namespace app::classes::types
