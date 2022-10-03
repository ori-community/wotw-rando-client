#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SlugHitBehaviour {
        namespace {
            app::SlugHitBehaviour__Class* type_info_ref = nullptr;
        }
        app::SlugHitBehaviour__Class** type_info = &type_info_ref;
        inline app::SlugHitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SlugHitBehaviour__Class>(type_info, "", "SlugHitBehaviour");
        }
        inline app::SlugHitBehaviour* create() {
            return il2cpp::create_object<app::SlugHitBehaviour>(get_class());
        }
    } // namespace SlugHitBehaviour
} // namespace app::classes::types
