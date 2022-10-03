#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EChatEntryType__Enum {
        namespace {
            app::EChatEntryType__Enum__Class* type_info_ref = nullptr;
        }
        app::EChatEntryType__Enum__Class** type_info = &type_info_ref;
        inline app::EChatEntryType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EChatEntryType__Enum__Class>(type_info, "Steamworks", "EChatEntryType");
        }
        inline app::EChatEntryType__Enum* create() {
            return il2cpp::create_object<app::EChatEntryType__Enum>(get_class());
        }
    } // namespace EChatEntryType__Enum
} // namespace app::classes::types
