#pragma once
#include <Modloader/app/structs/RebindingReason__Enum.h>
#include <Modloader/app/structs/RebindingReason__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RebindingReason__Enum {
        inline app::RebindingReason__Enum__Class** type_info() {
            static app::RebindingReason__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RebindingReason__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RebindingReason__Enum__Class* get_class() {
            return il2cpp::get_class<app::RebindingReason__Enum__Class>(type_info(), "", "RebindingReason");
        }
        inline app::RebindingReason__Enum* create() {
            return il2cpp::create_object<app::RebindingReason__Enum>(get_class());
        }
    } // namespace RebindingReason__Enum
} // namespace app::classes::types
