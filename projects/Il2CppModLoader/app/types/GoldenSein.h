#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GoldenSein {
        namespace {
            app::GoldenSein__Class* type_info_ref = nullptr;
        }
        app::GoldenSein__Class** type_info = &type_info_ref;
        inline app::GoldenSein__Class* get_class() {
            return il2cpp::get_class<app::GoldenSein__Class>(type_info, "", "GoldenSein");
        }
        inline app::GoldenSein* create() {
            return il2cpp::create_object<app::GoldenSein>(get_class());
        }
    } // namespace GoldenSein
} // namespace app::classes::types
