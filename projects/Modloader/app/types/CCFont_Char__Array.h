#pragma once
#include <Modloader/app/structs/CCFont_Char__Array.h>
#include <Modloader/app/structs/CCFont_Char__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCFont_Char__Array {
        inline app::CCFont_Char__Array__Class** type_info() {
            static app::CCFont_Char__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CCFont_Char__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CCFont_Char__Array__Class* get_class() {
            return il2cpp::get_class<app::CCFont_Char__Array__Class>(type_info(), "", "CCFont+Char[]");
        }
        inline app::CCFont_Char__Array* create() {
            return il2cpp::create_object<app::CCFont_Char__Array>(get_class());
        }
    } // namespace CCFont_Char__Array
} // namespace app::classes::types
