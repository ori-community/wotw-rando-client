#pragma once
#include <Modloader/app/structs/UnityString.h>
#include <Modloader/app/structs/UnityString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityString {
        inline app::UnityString__Class** type_info() {
            static app::UnityString__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityString__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityString__Class* get_class() {
            return il2cpp::get_class<app::UnityString__Class>(type_info(), "UnityEngine", "UnityString");
        }
        inline app::UnityString* create() {
            return il2cpp::create_object<app::UnityString>(get_class());
        }
    } // namespace UnityString
} // namespace app::classes::types
