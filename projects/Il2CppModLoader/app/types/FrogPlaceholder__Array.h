#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrogPlaceholder__Array {
        namespace {
            app::FrogPlaceholder__Array__Class* type_info_ref = nullptr;
        }
        app::FrogPlaceholder__Array__Class** type_info = &type_info_ref;
        inline app::FrogPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::FrogPlaceholder__Array__Class>(type_info, "", "FrogPlaceholder[]");
        }
        inline app::FrogPlaceholder__Array* create() {
            return il2cpp::create_object<app::FrogPlaceholder__Array>(get_class());
        }
    } // namespace FrogPlaceholder__Array
} // namespace app::classes::types
