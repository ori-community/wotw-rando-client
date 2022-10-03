#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Suspendable {
        namespace {
            app::Suspendable__Class* type_info_ref = nullptr;
        }
        app::Suspendable__Class** type_info = &type_info_ref;
        inline app::Suspendable__Class* get_class() {
            return il2cpp::get_class<app::Suspendable__Class>(type_info, "Moon", "Suspendable");
        }
        inline app::Suspendable* create() {
            return il2cpp::create_object<app::Suspendable>(get_class());
        }
    } // namespace Suspendable
} // namespace app::classes::types
