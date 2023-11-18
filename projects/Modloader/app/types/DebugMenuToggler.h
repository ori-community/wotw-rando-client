#pragma once
#include <Modloader/app/structs/DebugMenuToggler.h>
#include <Modloader/app/structs/DebugMenuToggler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugMenuToggler {
        inline app::DebugMenuToggler__Class** type_info() {
            static app::DebugMenuToggler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugMenuToggler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugMenuToggler__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuToggler__Class>(type_info(), "", "DebugMenuToggler");
        }
        inline app::DebugMenuToggler* create() {
            return il2cpp::create_object<app::DebugMenuToggler>(get_class());
        }
    } // namespace DebugMenuToggler
} // namespace app::classes::types
