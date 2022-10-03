#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FallBehaviour {
        namespace {
            app::FallBehaviour__Class* type_info_ref = nullptr;
        }
        app::FallBehaviour__Class** type_info = &type_info_ref;
        inline app::FallBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FallBehaviour__Class>(type_info, "", "FallBehaviour");
        }
        inline app::FallBehaviour* create() {
            return il2cpp::create_object<app::FallBehaviour>(get_class());
        }
    } // namespace FallBehaviour
} // namespace app::classes::types
