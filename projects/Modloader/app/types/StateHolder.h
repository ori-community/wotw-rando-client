#pragma once
#include <Modloader/app/structs/StateHolder.h>
#include <Modloader/app/structs/StateHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateHolder {
        inline app::StateHolder__Class** type_info() {
            static app::StateHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateHolder__Class* get_class() {
            return il2cpp::get_class<app::StateHolder__Class>(type_info(), "", "StateHolder");
        }
        inline app::StateHolder* create() {
            return il2cpp::create_object<app::StateHolder>(get_class());
        }
    } // namespace StateHolder
} // namespace app::classes::types
