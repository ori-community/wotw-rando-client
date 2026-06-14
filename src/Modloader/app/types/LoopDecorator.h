#pragma once
#include <Modloader/app/structs/LoopDecorator.h>
#include <Modloader/app/structs/LoopDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoopDecorator {
        inline app::LoopDecorator__Class** type_info() {
            static app::LoopDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoopDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoopDecorator__Class* get_class() {
            return il2cpp::get_class<app::LoopDecorator__Class>(type_info(), "Moon.BehaviourSystem", "LoopDecorator");
        }
        inline app::LoopDecorator* create() {
            return il2cpp::create_object<app::LoopDecorator>(get_class());
        }
    } // namespace LoopDecorator
} // namespace app::classes::types
