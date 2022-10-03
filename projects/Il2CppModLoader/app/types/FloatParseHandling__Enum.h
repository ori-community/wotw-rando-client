#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatParseHandling__Enum {
        namespace {
            app::FloatParseHandling__Enum__Class* type_info_ref = nullptr;
        }
        app::FloatParseHandling__Enum__Class** type_info = &type_info_ref;
        inline app::FloatParseHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::FloatParseHandling__Enum__Class>(type_info, "Newtonsoft.Json", "FloatParseHandling");
        }
        inline app::FloatParseHandling__Enum* create() {
            return il2cpp::create_object<app::FloatParseHandling__Enum>(get_class());
        }
    } // namespace FloatParseHandling__Enum
} // namespace app::classes::types
