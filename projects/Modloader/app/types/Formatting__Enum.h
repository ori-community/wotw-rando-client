#pragma once
#include <Modloader/app/structs/Formatting__Enum.h>
#include <Modloader/app/structs/Formatting__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Formatting__Enum {
        inline app::Formatting__Enum__Class** type_info() {
            static app::Formatting__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Formatting__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Formatting__Enum__Class* get_class() {
            return il2cpp::get_class<app::Formatting__Enum__Class>(type_info(), "System.Xml", "Formatting");
        }
        inline app::Formatting__Enum* create() {
            return il2cpp::create_object<app::Formatting__Enum>(get_class());
        }
    } // namespace Formatting__Enum
} // namespace app::classes::types
