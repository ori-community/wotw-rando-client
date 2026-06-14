#pragma once
#include <Modloader/app/structs/LeakLocator.h>
#include <Modloader/app/structs/LeakLocator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeakLocator {
        inline app::LeakLocator__Class** type_info() {
            static app::LeakLocator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeakLocator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeakLocator__Class* get_class() {
            return il2cpp::get_class<app::LeakLocator__Class>(type_info(), "", "LeakLocator");
        }
        inline app::LeakLocator* create() {
            return il2cpp::create_object<app::LeakLocator>(get_class());
        }
    } // namespace LeakLocator
} // namespace app::classes::types
