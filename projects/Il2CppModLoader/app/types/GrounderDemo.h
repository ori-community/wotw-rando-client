#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrounderDemo {
        namespace {
            app::GrounderDemo__Class* type_info_ref = nullptr;
        }
        app::GrounderDemo__Class** type_info = &type_info_ref;
        inline app::GrounderDemo__Class* get_class() {
            return il2cpp::get_class<app::GrounderDemo__Class>(type_info, "RootMotion.Demos", "GrounderDemo");
        }
        inline app::GrounderDemo* create() {
            return il2cpp::create_object<app::GrounderDemo>(get_class());
        }
    } // namespace GrounderDemo
} // namespace app::classes::types
