#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstraintsMetaData__Array {
        namespace {
            app::ConstraintsMetaData__Array__Class* type_info_ref = nullptr;
        }
        app::ConstraintsMetaData__Array__Class** type_info = &type_info_ref;
        inline app::ConstraintsMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::ConstraintsMetaData__Array__Class>(type_info, "Moon.Timeline", "ConstraintsMetaData[]");
        }
        inline app::ConstraintsMetaData__Array* create() {
            return il2cpp::create_object<app::ConstraintsMetaData__Array>(get_class());
        }
    } // namespace ConstraintsMetaData__Array
} // namespace app::classes::types
