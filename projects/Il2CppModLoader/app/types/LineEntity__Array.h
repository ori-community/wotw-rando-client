#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LineEntity__Array {
        namespace {
            app::LineEntity__Array__Class* type_info_ref = nullptr;
        }
        app::LineEntity__Array__Class** type_info = &type_info_ref;
        inline app::LineEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::LineEntity__Array__Class>(type_info, "Moon.VisualDebug", "LineEntity[]");
        }
        inline app::LineEntity__Array* create() {
            return il2cpp::create_object<app::LineEntity__Array>(get_class());
        }
    } // namespace LineEntity__Array
} // namespace app::classes::types
