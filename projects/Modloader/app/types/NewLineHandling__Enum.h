#pragma once
#include <Modloader/app/structs/NewLineHandling__Enum.h>
#include <Modloader/app/structs/NewLineHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewLineHandling__Enum {
        inline app::NewLineHandling__Enum__Class** type_info() {
            static app::NewLineHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NewLineHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NewLineHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::NewLineHandling__Enum__Class>(type_info(), "System.Xml", "NewLineHandling");
        }
        inline app::NewLineHandling__Enum* create() {
            return il2cpp::create_object<app::NewLineHandling__Enum>(get_class());
        }
    } // namespace NewLineHandling__Enum
} // namespace app::classes::types
