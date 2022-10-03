#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharMetaData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharMetaData__Array__Class** type_info;
        inline app::CharMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::CharMetaData__Array__Class>(type_info, "CatlikeCoding.TextBox", "CharMetaData[]");
        }
        inline app::CharMetaData__Array* create() {
            return il2cpp::create_object<app::CharMetaData__Array>(get_class());
        }
    } // namespace CharMetaData__Array
} // namespace app::classes::types
