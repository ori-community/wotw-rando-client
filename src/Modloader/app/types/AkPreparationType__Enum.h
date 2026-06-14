#pragma once
#include <Modloader/app/structs/AkPreparationType__Enum.h>
#include <Modloader/app/structs/AkPreparationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkPreparationType__Enum {
        inline app::AkPreparationType__Enum__Class** type_info() {
            static app::AkPreparationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkPreparationType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkPreparationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkPreparationType__Enum__Class>(type_info(), "", "AkPreparationType");
        }
        inline app::AkPreparationType__Enum* create() {
            return il2cpp::create_object<app::AkPreparationType__Enum>(get_class());
        }
    } // namespace AkPreparationType__Enum
} // namespace app::classes::types
