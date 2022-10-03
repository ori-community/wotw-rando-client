#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EChatMemberStateChange__Enum {
        namespace {
            app::EChatMemberStateChange__Enum__Class* type_info_ref = nullptr;
        }
        app::EChatMemberStateChange__Enum__Class** type_info = &type_info_ref;
        inline app::EChatMemberStateChange__Enum__Class* get_class() {
            return il2cpp::get_class<app::EChatMemberStateChange__Enum__Class>(type_info, "Steamworks", "EChatMemberStateChange");
        }
        inline app::EChatMemberStateChange__Enum* create() {
            return il2cpp::create_object<app::EChatMemberStateChange__Enum>(get_class());
        }
    } // namespace EChatMemberStateChange__Enum
} // namespace app::classes::types
