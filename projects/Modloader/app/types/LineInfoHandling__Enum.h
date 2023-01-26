#pragma once
#include <Modloader/app/structs/LineInfoHandling__Enum.h>
#include <Modloader/app/structs/LineInfoHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LineInfoHandling__Enum {
        inline app::LineInfoHandling__Enum__Class** type_info() {
            static app::LineInfoHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LineInfoHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LineInfoHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::LineInfoHandling__Enum__Class>(type_info(), "Newtonsoft.Json.Linq", "LineInfoHandling");
        }
        inline app::LineInfoHandling__Enum* create() {
            return il2cpp::create_object<app::LineInfoHandling__Enum>(get_class());
        }
    } // namespace LineInfoHandling__Enum
} // namespace app::classes::types
