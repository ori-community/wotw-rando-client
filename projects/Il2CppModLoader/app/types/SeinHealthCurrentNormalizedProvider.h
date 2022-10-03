#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinHealthCurrentNormalizedProvider {
        namespace {
            app::SeinHealthCurrentNormalizedProvider__Class* type_info_ref = nullptr;
        }
        app::SeinHealthCurrentNormalizedProvider__Class** type_info = &type_info_ref;
        inline app::SeinHealthCurrentNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthCurrentNormalizedProvider__Class>(type_info, "", "SeinHealthCurrentNormalizedProvider");
        }
        inline app::SeinHealthCurrentNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinHealthCurrentNormalizedProvider>(get_class());
        }
    } // namespace SeinHealthCurrentNormalizedProvider
} // namespace app::classes::types
