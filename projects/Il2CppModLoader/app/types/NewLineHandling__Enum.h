#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewLineHandling__Enum {
        namespace {
            app::NewLineHandling__Enum__Class* type_info_ref = nullptr;
        }
        app::NewLineHandling__Enum__Class** type_info = &type_info_ref;
        inline app::NewLineHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::NewLineHandling__Enum__Class>(type_info, "System.Xml", "NewLineHandling");
        }
        inline app::NewLineHandling__Enum* create() {
            return il2cpp::create_object<app::NewLineHandling__Enum>(get_class());
        }
    } // namespace NewLineHandling__Enum
} // namespace app::classes::types
