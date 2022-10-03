#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ephemeron {
        namespace {
            app::Ephemeron__Class* type_info_ref = nullptr;
        }
        app::Ephemeron__Class** type_info = &type_info_ref;
        inline app::Ephemeron__Class* get_class() {
            return il2cpp::get_class<app::Ephemeron__Class>(type_info, "System.Runtime.CompilerServices", "Ephemeron");
        }
        inline app::Ephemeron* create() {
            return il2cpp::create_object<app::Ephemeron>(get_class());
        }
        inline app::Ephemeron__Boxed* box(app::Ephemeron value) {
            return il2cpp::box_value<app::Ephemeron__Boxed>(get_class(), value);
        }
        inline app::Ephemeron__Array* create_array(int size) {
            return il2cpp::array_new<app::Ephemeron__Array>(get_class(), size);
        }
    } // namespace Ephemeron
} // namespace app::classes::types
