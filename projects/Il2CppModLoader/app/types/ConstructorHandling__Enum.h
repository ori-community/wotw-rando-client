#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstructorHandling__Enum {
        namespace {
            app::ConstructorHandling__Enum__Class* type_info_ref = nullptr;
        }
        app::ConstructorHandling__Enum__Class** type_info = &type_info_ref;
        inline app::ConstructorHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConstructorHandling__Enum__Class>(type_info, "Newtonsoft.Json", "ConstructorHandling");
        }
        inline app::ConstructorHandling__Enum* create() {
            return il2cpp::create_object<app::ConstructorHandling__Enum>(get_class());
        }
    } // namespace ConstructorHandling__Enum
} // namespace app::classes::types
