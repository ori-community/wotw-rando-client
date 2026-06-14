#pragma once
#include <Modloader/app/structs/Shift__Enum.h>
#include <Modloader/app/structs/Shift__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Shift__Enum {
        inline app::Shift__Enum__Class** type_info() {
            static app::Shift__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Shift__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Shift__Enum__Class* get_class() {
            return il2cpp::get_class<app::Shift__Enum__Class>(type_info(), "", "Shift");
        }
        inline app::Shift__Enum* create() {
            return il2cpp::create_object<app::Shift__Enum>(get_class());
        }
    } // namespace Shift__Enum
} // namespace app::classes::types
