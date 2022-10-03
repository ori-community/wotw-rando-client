#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindArea {
        namespace {
            app::WindArea__Class* type_info_ref = nullptr;
        }
        app::WindArea__Class** type_info = &type_info_ref;
        inline app::WindArea__Class* get_class() {
            return il2cpp::get_class<app::WindArea__Class>(type_info, "", "WindArea");
        }
        inline app::WindArea* create() {
            return il2cpp::create_object<app::WindArea>(get_class());
        }
    } // namespace WindArea
} // namespace app::classes::types
