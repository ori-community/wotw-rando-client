#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriCell {
        namespace {
            app::OriCell__Class* type_info_ref = nullptr;
        }
        app::OriCell__Class** type_info = &type_info_ref;
        inline app::OriCell__Class* get_class() {
            return il2cpp::get_class<app::OriCell__Class>(type_info, "", "OriCell");
        }
        inline app::OriCell* create() {
            return il2cpp::create_object<app::OriCell>(get_class());
        }
        inline app::OriCell__Array* create_array(int size) {
            return il2cpp::array_new<app::OriCell__Array>(get_class(), size);
        }
    } // namespace OriCell
} // namespace app::classes::types
