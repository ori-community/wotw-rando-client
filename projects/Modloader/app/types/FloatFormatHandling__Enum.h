#pragma once
#include <Modloader/app/structs/FloatFormatHandling__Enum.h>
#include <Modloader/app/structs/FloatFormatHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatFormatHandling__Enum {
        inline app::FloatFormatHandling__Enum__Class** type_info() {
            static app::FloatFormatHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatFormatHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatFormatHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::FloatFormatHandling__Enum__Class>(type_info(), "Newtonsoft.Json", "FloatFormatHandling");
        }
        inline app::FloatFormatHandling__Enum* create() {
            return il2cpp::create_object<app::FloatFormatHandling__Enum>(get_class());
        }
    } // namespace FloatFormatHandling__Enum
} // namespace app::classes::types
