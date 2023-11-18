#pragma once
#include <Modloader/app/structs/Tuple_2_String_Single___Array.h>
#include <Modloader/app/structs/Tuple_2_String_Single___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tuple_2_String_Single___Array {
        inline app::Tuple_2_String_Single___Array__Class** type_info() {
            static app::Tuple_2_String_Single___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Tuple_2_String_Single___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Tuple_2_String_Single___Array__Class* get_class() {
            return il2cpp::get_class<app::Tuple_2_String_Single___Array__Class>(type_info(), "System", "Tuple`2[String,Single][]");
        }
        inline app::Tuple_2_String_Single___Array* create() {
            return il2cpp::create_object<app::Tuple_2_String_Single___Array>(get_class());
        }
    } // namespace Tuple_2_String_Single___Array
} // namespace app::classes::types
