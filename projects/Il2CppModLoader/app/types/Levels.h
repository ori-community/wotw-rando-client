#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Levels {
        namespace {
            app::Levels__Class* type_info_ref = nullptr;
        }
        app::Levels__Class** type_info = &type_info_ref;
        inline app::Levels__Class* get_class() {
            return il2cpp::get_class<app::Levels__Class>(type_info, "Colorful", "Levels");
        }
        inline app::Levels* create() {
            return il2cpp::create_object<app::Levels>(get_class());
        }
    } // namespace Levels
} // namespace app::classes::types
