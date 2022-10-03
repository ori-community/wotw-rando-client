#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreserveSigAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PreserveSigAttribute__Class** type_info;
        inline app::PreserveSigAttribute__Class* get_class() {
            return il2cpp::get_class<app::PreserveSigAttribute__Class>(type_info, "System.Runtime.InteropServices", "PreserveSigAttribute");
        }
        inline app::PreserveSigAttribute* create() {
            return il2cpp::create_object<app::PreserveSigAttribute>(get_class());
        }
    } // namespace PreserveSigAttribute
} // namespace app::classes::types
