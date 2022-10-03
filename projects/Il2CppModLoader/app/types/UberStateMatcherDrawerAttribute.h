#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateMatcherDrawerAttribute {
        namespace {
            app::UberStateMatcherDrawerAttribute__Class* type_info_ref = nullptr;
        }
        app::UberStateMatcherDrawerAttribute__Class** type_info = &type_info_ref;
        inline app::UberStateMatcherDrawerAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberStateMatcherDrawerAttribute__Class>(type_info, "", "UberStateMatcherDrawerAttribute");
        }
        inline app::UberStateMatcherDrawerAttribute* create() {
            return il2cpp::create_object<app::UberStateMatcherDrawerAttribute>(get_class());
        }
    } // namespace UberStateMatcherDrawerAttribute
} // namespace app::classes::types
