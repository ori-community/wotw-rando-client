#pragma once
#include <Modloader/app/structs/DebugDecorator.h>
#include <Modloader/app/structs/DebugDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugDecorator {
        inline app::DebugDecorator__Class** type_info() {
            static app::DebugDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugDecorator__Class* get_class() {
            return il2cpp::get_class<app::DebugDecorator__Class>(type_info(), "Moon.BehaviourSystem", "DebugDecorator");
        }
        inline app::DebugDecorator* create() {
            return il2cpp::create_object<app::DebugDecorator>(get_class());
        }
    } // namespace DebugDecorator
} // namespace app::classes::types
