#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Brain {
        namespace {
            app::Brain__Class* type_info_ref = nullptr;
        }
        app::Brain__Class** type_info = &type_info_ref;
        inline app::Brain__Class* get_class() {
            return il2cpp::get_class<app::Brain__Class>(type_info, "Moon", "Brain");
        }
        inline app::Brain* create() {
            return il2cpp::create_object<app::Brain>(get_class());
        }
    } // namespace Brain
} // namespace app::classes::types
