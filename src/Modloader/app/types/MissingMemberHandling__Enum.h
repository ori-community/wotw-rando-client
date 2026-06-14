#pragma once
#include <Modloader/app/structs/MissingMemberHandling__Enum.h>
#include <Modloader/app/structs/MissingMemberHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MissingMemberHandling__Enum {
        inline app::MissingMemberHandling__Enum__Class** type_info() {
            static app::MissingMemberHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MissingMemberHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MissingMemberHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::MissingMemberHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "MissingMemberHandling");
        }
        inline app::MissingMemberHandling__Enum* create() {
            return il2cpp::create_object<app::MissingMemberHandling__Enum>(get_class());
        }
    } // namespace MissingMemberHandling__Enum
} // namespace app::classes::types
