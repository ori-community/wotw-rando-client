#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NPOTSupport__Enum {
        namespace {
            inline app::NPOTSupport__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NPOTSupport__Enum__Class** type_info = &type_info_ref;
        inline app::NPOTSupport__Enum__Class* get_class() {
            return il2cpp::get_class<app::NPOTSupport__Enum__Class>(type_info, "UnityEngine", "NPOTSupport");
        }
        inline app::NPOTSupport__Enum* create() {
            return il2cpp::create_object<app::NPOTSupport__Enum>(get_class());
        }
    } // namespace NPOTSupport__Enum
} // namespace app::classes::types
