#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatFormatHandling__Enum {
        namespace {
            app::FloatFormatHandling__Enum__Class* type_info_ref = nullptr;
        }
        app::FloatFormatHandling__Enum__Class** type_info = &type_info_ref;
        inline app::FloatFormatHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::FloatFormatHandling__Enum__Class>(type_info, "Newtonsoft.Json", "FloatFormatHandling");
        }
        inline app::FloatFormatHandling__Enum* create() {
            return il2cpp::create_object<app::FloatFormatHandling__Enum>(get_class());
        }
    } // namespace FloatFormatHandling__Enum
} // namespace app::classes::types
