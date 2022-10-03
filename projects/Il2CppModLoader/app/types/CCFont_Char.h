#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCFont_Char {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CCFont_Char__Class** type_info;
        inline app::CCFont_Char__Class* get_class() {
            return il2cpp::get_nested_class<app::CCFont_Char__Class>(type_info, "", "CCFont", "Char");
        }
        inline app::CCFont_Char* create() {
            return il2cpp::create_object<app::CCFont_Char>(get_class());
        }
        inline app::CCFont_Char__Array* create_array(int size) {
            return il2cpp::array_new<app::CCFont_Char__Array>(get_class(), size);
        }
    } // namespace CCFont_Char
} // namespace app::classes::types
