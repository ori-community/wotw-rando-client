#pragma once
#include <Modloader/app/structs/PreserveReferencesHandling__Enum.h>
#include <Modloader/app/structs/PreserveReferencesHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreserveReferencesHandling__Enum {
        inline app::PreserveReferencesHandling__Enum__Class** type_info() {
            static app::PreserveReferencesHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreserveReferencesHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreserveReferencesHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::PreserveReferencesHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "PreserveReferencesHandling");
        }
        inline app::PreserveReferencesHandling__Enum* create() {
            return il2cpp::create_object<app::PreserveReferencesHandling__Enum>(get_class());
        }
    } // namespace PreserveReferencesHandling__Enum
} // namespace app::classes::types
