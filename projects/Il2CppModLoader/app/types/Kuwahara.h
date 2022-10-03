#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Kuwahara {
        namespace {
            app::Kuwahara__Class* type_info_ref = nullptr;
        }
        app::Kuwahara__Class** type_info = &type_info_ref;
        inline app::Kuwahara__Class* get_class() {
            return il2cpp::get_class<app::Kuwahara__Class>(type_info, "Colorful", "Kuwahara");
        }
        inline app::Kuwahara* create() {
            return il2cpp::create_object<app::Kuwahara>(get_class());
        }
    } // namespace Kuwahara
} // namespace app::classes::types
