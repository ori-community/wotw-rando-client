#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExtractedIntFromInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExtractedIntFromInt64__Class** type_info;
        inline app::ExtractedIntFromInt64__Class* get_class() {
            return il2cpp::get_class<app::ExtractedIntFromInt64__Class>(type_info, "", "ExtractedIntFromInt64");
        }
        inline app::ExtractedIntFromInt64* create() {
            return il2cpp::create_object<app::ExtractedIntFromInt64>(get_class());
        }
    } // namespace ExtractedIntFromInt64
} // namespace app::classes::types
