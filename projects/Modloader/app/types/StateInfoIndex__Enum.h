#pragma once
#include <Modloader/app/structs/StateInfoIndex__Enum.h>
#include <Modloader/app/structs/StateInfoIndex__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateInfoIndex__Enum {
        inline app::StateInfoIndex__Enum__Class** type_info() {
            static app::StateInfoIndex__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateInfoIndex__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateInfoIndex__Enum__Class* get_class() {
            return il2cpp::get_class<app::StateInfoIndex__Enum__Class>(type_info(), "UnityEngine", "StateInfoIndex");
        }
        inline app::StateInfoIndex__Enum* create() {
            return il2cpp::create_object<app::StateInfoIndex__Enum>(get_class());
        }
    } // namespace StateInfoIndex__Enum
} // namespace app::classes::types
