#pragma once
#include <Modloader/app/structs/EDenyReason__Enum.h>
#include <Modloader/app/structs/EDenyReason__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EDenyReason__Enum {
        inline app::EDenyReason__Enum__Class** type_info() {
            static app::EDenyReason__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EDenyReason__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EDenyReason__Enum__Class* get_class() {
            return il2cpp::get_class<app::EDenyReason__Enum__Class>(type_info(), "Steamworks", "EDenyReason");
        }
        inline app::EDenyReason__Enum* create() {
            return il2cpp::create_object<app::EDenyReason__Enum>(get_class());
        }
    } // namespace EDenyReason__Enum
} // namespace app::classes::types
