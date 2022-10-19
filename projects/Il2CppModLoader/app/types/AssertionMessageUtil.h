#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssertionMessageUtil {
        namespace {
            inline app::AssertionMessageUtil__Class* type_info_ref = nullptr;
        }
        inline app::AssertionMessageUtil__Class** type_info = &type_info_ref;
        inline app::AssertionMessageUtil__Class* get_class() {
            return il2cpp::get_class<app::AssertionMessageUtil__Class>(type_info, "UnityEngine.Assertions", "AssertionMessageUtil");
        }
        inline app::AssertionMessageUtil* create() {
            return il2cpp::create_object<app::AssertionMessageUtil>(get_class());
        }
    } // namespace AssertionMessageUtil
} // namespace app::classes::types
