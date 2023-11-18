#pragma once
#include <Modloader/app/structs/RemapDecorator.h>
#include <Modloader/app/structs/RemapDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemapDecorator {
        inline app::RemapDecorator__Class** type_info() {
            static app::RemapDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemapDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemapDecorator__Class* get_class() {
            return il2cpp::get_class<app::RemapDecorator__Class>(type_info(), "Moon.BehaviourSystem", "RemapDecorator");
        }
        inline app::RemapDecorator* create() {
            return il2cpp::create_object<app::RemapDecorator>(get_class());
        }
    } // namespace RemapDecorator
} // namespace app::classes::types
