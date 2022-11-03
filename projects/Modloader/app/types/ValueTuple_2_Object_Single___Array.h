#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValueTuple_2_Object_Single___Array {
        namespace {
            inline app::ValueTuple_2_Object_Single___Array__Class* type_info_ref = nullptr;
        }
        inline app::ValueTuple_2_Object_Single___Array__Class** type_info = &type_info_ref;
        inline app::ValueTuple_2_Object_Single___Array__Class* get_class() {
            return il2cpp::get_class<app::ValueTuple_2_Object_Single___Array__Class>(type_info, "System", "ValueTuple`2[Object,Single][]");
        }
        inline app::ValueTuple_2_Object_Single___Array* create() {
            return il2cpp::create_object<app::ValueTuple_2_Object_Single___Array>(get_class());
        }
    } // namespace ValueTuple_2_Object_Single___Array
} // namespace app::classes::types
