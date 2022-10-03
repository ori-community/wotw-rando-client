#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssertionMessageUtil {
        namespace {
            app::AssertionMessageUtil__Class* type_info_ref = nullptr;
        }
        app::AssertionMessageUtil__Class** type_info = &type_info_ref;
        inline app::AssertionMessageUtil__Class* get_class() {
            return il2cpp::get_class<app::AssertionMessageUtil__Class>(type_info, "UnityEngine.Assertions", "AssertionMessageUtil");
        }
        inline app::AssertionMessageUtil* create() {
            return il2cpp::create_object<app::AssertionMessageUtil>(get_class());
        }
    } // namespace AssertionMessageUtil
} // namespace app::classes::types
