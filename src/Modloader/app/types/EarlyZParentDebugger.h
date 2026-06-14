#pragma once
#include <Modloader/app/structs/EarlyZParentDebugger.h>
#include <Modloader/app/structs/EarlyZParentDebugger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyZParentDebugger {
        inline app::EarlyZParentDebugger__Class** type_info() {
            static app::EarlyZParentDebugger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyZParentDebugger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyZParentDebugger__Class* get_class() {
            return il2cpp::get_class<app::EarlyZParentDebugger__Class>(type_info(), "Moon.Rendering", "EarlyZParentDebugger");
        }
        inline app::EarlyZParentDebugger* create() {
            return il2cpp::create_object<app::EarlyZParentDebugger>(get_class());
        }
    } // namespace EarlyZParentDebugger
} // namespace app::classes::types
