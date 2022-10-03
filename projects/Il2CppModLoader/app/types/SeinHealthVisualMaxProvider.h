#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinHealthVisualMaxProvider {
        namespace {
            app::SeinHealthVisualMaxProvider__Class* type_info_ref = nullptr;
        }
        app::SeinHealthVisualMaxProvider__Class** type_info = &type_info_ref;
        inline app::SeinHealthVisualMaxProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthVisualMaxProvider__Class>(type_info, "", "SeinHealthVisualMaxProvider");
        }
        inline app::SeinHealthVisualMaxProvider* create() {
            return il2cpp::create_object<app::SeinHealthVisualMaxProvider>(get_class());
        }
    } // namespace SeinHealthVisualMaxProvider
} // namespace app::classes::types
