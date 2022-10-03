#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeDetectorString {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChangeDetectorString__Class** type_info;
        inline app::ChangeDetectorString__Class* get_class() {
            return il2cpp::get_class<app::ChangeDetectorString__Class>(type_info, "", "ChangeDetectorString");
        }
        inline app::ChangeDetectorString* create() {
            return il2cpp::create_object<app::ChangeDetectorString>(get_class());
        }
    } // namespace ChangeDetectorString
} // namespace app::classes::types
