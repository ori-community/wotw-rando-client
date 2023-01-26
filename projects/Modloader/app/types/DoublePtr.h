#pragma once
#include <Modloader/app/structs/DoublePtr.h>
#include <Modloader/app/structs/DoublePtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoublePtr {
        inline app::DoublePtr__Class** type_info() {
            static app::DoublePtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DoublePtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DoublePtr__Class* get_class() {
            return il2cpp::get_class<app::DoublePtr__Class>(type_info(), "System", "Double*");
        }
        inline app::DoublePtr* create() {
            return il2cpp::create_object<app::DoublePtr>(get_class());
        }
    } // namespace DoublePtr
} // namespace app::classes::types
