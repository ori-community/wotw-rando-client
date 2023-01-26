#pragma once
#include <Modloader/app/structs/EChatEntryType__Enum.h>
#include <Modloader/app/structs/EChatEntryType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EChatEntryType__Enum {
        inline app::EChatEntryType__Enum__Class** type_info() {
            static app::EChatEntryType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EChatEntryType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EChatEntryType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EChatEntryType__Enum__Class>(type_info(), "Steamworks", "EChatEntryType");
        }
        inline app::EChatEntryType__Enum* create() {
            return il2cpp::create_object<app::EChatEntryType__Enum>(get_class());
        }
    } // namespace EChatEntryType__Enum
} // namespace app::classes::types
