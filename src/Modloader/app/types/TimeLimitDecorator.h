#pragma once
#include <Modloader/app/structs/TimeLimitDecorator.h>
#include <Modloader/app/structs/TimeLimitDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeLimitDecorator {
        inline app::TimeLimitDecorator__Class** type_info() {
            static app::TimeLimitDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeLimitDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeLimitDecorator__Class* get_class() {
            return il2cpp::get_class<app::TimeLimitDecorator__Class>(type_info(), "Moon.BehaviourSystem", "TimeLimitDecorator");
        }
        inline app::TimeLimitDecorator* create() {
            return il2cpp::create_object<app::TimeLimitDecorator>(get_class());
        }
    } // namespace TimeLimitDecorator
} // namespace app::classes::types
