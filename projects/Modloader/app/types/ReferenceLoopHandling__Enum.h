#pragma once
#include <Modloader/app/structs/ReferenceLoopHandling__Enum.h>
#include <Modloader/app/structs/ReferenceLoopHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReferenceLoopHandling__Enum {
        inline app::ReferenceLoopHandling__Enum__Class** type_info() {
            static app::ReferenceLoopHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReferenceLoopHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReferenceLoopHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReferenceLoopHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "ReferenceLoopHandling");
        }
        inline app::ReferenceLoopHandling__Enum* create() {
            return il2cpp::create_object<app::ReferenceLoopHandling__Enum>(get_class());
        }
    } // namespace ReferenceLoopHandling__Enum
} // namespace app::classes::types
