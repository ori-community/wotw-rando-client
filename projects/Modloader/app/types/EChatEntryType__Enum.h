#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EChatEntryType__Enum__Class.h>
#include <Modloader/app/structs/EChatEntryType__Enum.h>

namespace app::classes::types {
    namespace EChatEntryType__Enum {
        namespace {
            inline app::EChatEntryType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EChatEntryType__Enum__Class** type_info = &type_info_ref;
        inline app::EChatEntryType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EChatEntryType__Enum__Class>(type_info, "Steamworks", "EChatEntryType");
        }
        inline app::EChatEntryType__Enum* create() {
            return il2cpp::create_object<app::EChatEntryType__Enum>(get_class());
        }
    } // namespace EChatEntryType__Enum
} // namespace app::classes::types
