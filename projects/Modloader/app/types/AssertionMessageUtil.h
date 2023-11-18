#pragma once
#include <Modloader/app/structs/AssertionMessageUtil.h>
#include <Modloader/app/structs/AssertionMessageUtil__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssertionMessageUtil {
        inline app::AssertionMessageUtil__Class** type_info() {
            static app::AssertionMessageUtil__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssertionMessageUtil__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssertionMessageUtil__Class* get_class() {
            return il2cpp::get_class<app::AssertionMessageUtil__Class>(type_info(), "UnityEngine.Assertions", "AssertionMessageUtil");
        }
        inline app::AssertionMessageUtil* create() {
            return il2cpp::create_object<app::AssertionMessageUtil>(get_class());
        }
    } // namespace AssertionMessageUtil
} // namespace app::classes::types
