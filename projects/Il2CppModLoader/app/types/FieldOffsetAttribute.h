#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FieldOffsetAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FieldOffsetAttribute__Class** type_info;
        inline app::FieldOffsetAttribute__Class* get_class() {
            return il2cpp::get_class<app::FieldOffsetAttribute__Class>(type_info, "System.Runtime.InteropServices", "FieldOffsetAttribute");
        }
        inline app::FieldOffsetAttribute* create() {
            return il2cpp::create_object<app::FieldOffsetAttribute>(get_class());
        }
    } // namespace FieldOffsetAttribute
} // namespace app::classes::types
