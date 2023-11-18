#pragma once
#include <Modloader/app/structs/DebugProjectileTester.h>
#include <Modloader/app/structs/DebugProjectileTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugProjectileTester {
        inline app::DebugProjectileTester__Class** type_info() {
            static app::DebugProjectileTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugProjectileTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugProjectileTester__Class* get_class() {
            return il2cpp::get_class<app::DebugProjectileTester__Class>(type_info(), "", "DebugProjectileTester");
        }
        inline app::DebugProjectileTester* create() {
            return il2cpp::create_object<app::DebugProjectileTester>(get_class());
        }
    } // namespace DebugProjectileTester
} // namespace app::classes::types
