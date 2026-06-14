#pragma once
#include <Modloader/app/structs/ValueTuple_2_Int32_UnityEngine_GameObject___Array.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_UnityEngine_GameObject___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValueTuple_2_Int32_UnityEngine_GameObject___Array {
        inline app::ValueTuple_2_Int32_UnityEngine_GameObject___Array__Class** type_info() {
            static app::ValueTuple_2_Int32_UnityEngine_GameObject___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ValueTuple_2_Int32_UnityEngine_GameObject___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ValueTuple_2_Int32_UnityEngine_GameObject___Array__Class* get_class() {
            return il2cpp::get_class<app::ValueTuple_2_Int32_UnityEngine_GameObject___Array__Class>(type_info(), "System", "ValueTuple`2[Int32,UnityEngine.GameObject][]");
        }
        inline app::ValueTuple_2_Int32_UnityEngine_GameObject___Array* create() {
            return il2cpp::create_object<app::ValueTuple_2_Int32_UnityEngine_GameObject___Array>(get_class());
        }
    } // namespace ValueTuple_2_Int32_UnityEngine_GameObject___Array
} // namespace app::classes::types
