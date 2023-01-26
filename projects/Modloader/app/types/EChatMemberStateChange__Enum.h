#pragma once
#include <Modloader/app/structs/EChatMemberStateChange__Enum.h>
#include <Modloader/app/structs/EChatMemberStateChange__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EChatMemberStateChange__Enum {
        inline app::EChatMemberStateChange__Enum__Class** type_info() {
            static app::EChatMemberStateChange__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EChatMemberStateChange__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EChatMemberStateChange__Enum__Class* get_class() {
            return il2cpp::get_class<app::EChatMemberStateChange__Enum__Class>(type_info(), "Steamworks", "EChatMemberStateChange");
        }
        inline app::EChatMemberStateChange__Enum* create() {
            return il2cpp::create_object<app::EChatMemberStateChange__Enum>(get_class());
        }
    } // namespace EChatMemberStateChange__Enum
} // namespace app::classes::types
