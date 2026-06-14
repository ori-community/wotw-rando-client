#pragma once
#include <Modloader/app/structs/TriState__Enum.h>
#include <Modloader/app/structs/TriState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriState__Enum {
        inline app::TriState__Enum__Class** type_info() {
            static app::TriState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriState__Enum__Class* get_class() {
            return il2cpp::get_class<app::TriState__Enum__Class>(type_info(), "System.Xml", "TriState");
        }
        inline app::TriState__Enum* create() {
            return il2cpp::create_object<app::TriState__Enum>(get_class());
        }
    } // namespace TriState__Enum
} // namespace app::classes::types
