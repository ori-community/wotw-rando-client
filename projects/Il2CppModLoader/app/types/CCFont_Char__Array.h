#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCFont_Char__Array {
        namespace {
            inline app::CCFont_Char__Array__Class* type_info_ref = nullptr;
        }
        inline app::CCFont_Char__Array__Class** type_info = &type_info_ref;
        inline app::CCFont_Char__Array__Class* get_class() {
            return il2cpp::get_class<app::CCFont_Char__Array__Class>(type_info, "", "CCFont+Char[]");
        }
        inline app::CCFont_Char__Array* create() {
            return il2cpp::create_object<app::CCFont_Char__Array>(get_class());
        }
    } // namespace CCFont_Char__Array
} // namespace app::classes::types
