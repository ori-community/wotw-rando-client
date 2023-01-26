#pragma once
#include <Modloader/app/structs/ConformanceLevel__Enum.h>
#include <Modloader/app/structs/ConformanceLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConformanceLevel__Enum {
        inline app::ConformanceLevel__Enum__Class** type_info() {
            static app::ConformanceLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConformanceLevel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConformanceLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConformanceLevel__Enum__Class>(type_info(), "System.Xml", "ConformanceLevel");
        }
        inline app::ConformanceLevel__Enum* create() {
            return il2cpp::create_object<app::ConformanceLevel__Enum>(get_class());
        }
    } // namespace ConformanceLevel__Enum
} // namespace app::classes::types
