#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SharedJsonBuilder_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SharedJsonBuilder_c__Class** type_info;
        inline app::SharedJsonBuilder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SharedJsonBuilder_c__Class>(type_info, "Moon", "SharedJsonBuilder", "<>c");
        }
        inline app::SharedJsonBuilder_c* create() {
            return il2cpp::create_object<app::SharedJsonBuilder_c>(get_class());
        }
    } // namespace SharedJsonBuilder_c
} // namespace app::classes::types
