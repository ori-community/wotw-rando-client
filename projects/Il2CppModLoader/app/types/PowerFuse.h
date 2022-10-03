#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PowerFuse {
        namespace {
            app::PowerFuse__Class* type_info_ref = nullptr;
        }
        app::PowerFuse__Class** type_info = &type_info_ref;
        inline app::PowerFuse__Class* get_class() {
            return il2cpp::get_class<app::PowerFuse__Class>(type_info, "", "PowerFuse");
        }
        inline app::PowerFuse* create() {
            return il2cpp::create_object<app::PowerFuse>(get_class());
        }
        inline app::PowerFuse__Array* create_array(int size) {
            return il2cpp::array_new<app::PowerFuse__Array>(get_class(), size);
        }
    } // namespace PowerFuse
} // namespace app::classes::types
