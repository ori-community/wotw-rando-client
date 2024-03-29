#pragma once
#include <Modloader/app/structs/SystemLanguage__Enum.h>
#include <Modloader/app/structs/SystemLanguage__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SystemLanguage__Enum {
        inline app::SystemLanguage__Enum__Class** type_info() {
            static app::SystemLanguage__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SystemLanguage__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477CE88));
            }
            return cache;
        }
        inline app::SystemLanguage__Enum__Class* get_class() {
            return il2cpp::get_class<app::SystemLanguage__Enum__Class>(type_info(), "UnityEngine", "SystemLanguage");
        }
        inline app::SystemLanguage__Enum* create() {
            return il2cpp::create_object<app::SystemLanguage__Enum>(get_class());
        }
    } // namespace SystemLanguage__Enum
} // namespace app::classes::types
