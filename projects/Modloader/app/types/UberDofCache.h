#pragma once
#include <Modloader/app/structs/UberDofCache.h>
#include <Modloader/app/structs/UberDofCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberDofCache {
        inline app::UberDofCache__Class** type_info() {
            static app::UberDofCache__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberDofCache__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberDofCache__Class* get_class() {
            return il2cpp::get_class<app::UberDofCache__Class>(type_info(), "", "UberDofCache");
        }
        inline app::UberDofCache* create() {
            return il2cpp::create_object<app::UberDofCache>(get_class());
        }
    } // namespace UberDofCache
} // namespace app::classes::types
