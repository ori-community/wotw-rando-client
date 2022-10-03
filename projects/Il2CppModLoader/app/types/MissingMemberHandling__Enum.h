#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MissingMemberHandling__Enum {
        namespace {
            app::MissingMemberHandling__Enum__Class* type_info_ref = nullptr;
        }
        app::MissingMemberHandling__Enum__Class** type_info = &type_info_ref;
        inline app::MissingMemberHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::MissingMemberHandling__Enum__Class>(type_info, "Newtonsoft.Json", "MissingMemberHandling");
        }
        inline app::MissingMemberHandling__Enum* create() {
            return il2cpp::create_object<app::MissingMemberHandling__Enum>(get_class());
        }
    } // namespace MissingMemberHandling__Enum
} // namespace app::classes::types
