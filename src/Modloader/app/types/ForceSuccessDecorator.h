#pragma once
#include <Modloader/app/structs/ForceSuccessDecorator.h>
#include <Modloader/app/structs/ForceSuccessDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForceSuccessDecorator {
        inline app::ForceSuccessDecorator__Class** type_info() {
            static app::ForceSuccessDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ForceSuccessDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ForceSuccessDecorator__Class* get_class() {
            return il2cpp::get_class<app::ForceSuccessDecorator__Class>(type_info(), "Moon.BehaviourSystem", "ForceSuccessDecorator");
        }
        inline app::ForceSuccessDecorator* create() {
            return il2cpp::create_object<app::ForceSuccessDecorator>(get_class());
        }
    } // namespace ForceSuccessDecorator
} // namespace app::classes::types
