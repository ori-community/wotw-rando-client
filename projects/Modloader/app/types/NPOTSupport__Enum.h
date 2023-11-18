#pragma once
#include <Modloader/app/structs/NPOTSupport__Enum.h>
#include <Modloader/app/structs/NPOTSupport__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPOTSupport__Enum {
        inline app::NPOTSupport__Enum__Class** type_info() {
            static app::NPOTSupport__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NPOTSupport__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NPOTSupport__Enum__Class* get_class() {
            return il2cpp::get_class<app::NPOTSupport__Enum__Class>(type_info(), "UnityEngine", "NPOTSupport");
        }
        inline app::NPOTSupport__Enum* create() {
            return il2cpp::create_object<app::NPOTSupport__Enum>(get_class());
        }
    } // namespace NPOTSupport__Enum
} // namespace app::classes::types
