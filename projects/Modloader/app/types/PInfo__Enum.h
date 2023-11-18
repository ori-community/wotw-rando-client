#pragma once
#include <Modloader/app/structs/PInfo__Enum.h>
#include <Modloader/app/structs/PInfo__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PInfo__Enum {
        inline app::PInfo__Enum__Class** type_info() {
            static app::PInfo__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PInfo__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PInfo__Enum__Class* get_class() {
            return il2cpp::get_class<app::PInfo__Enum__Class>(type_info(), "System.Reflection", "PInfo");
        }
        inline app::PInfo__Enum* create() {
            return il2cpp::create_object<app::PInfo__Enum>(get_class());
        }
    } // namespace PInfo__Enum
} // namespace app::classes::types
