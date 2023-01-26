#pragma once
#include <Modloader/app/structs/ContinueConditionContext.h>
#include <Modloader/app/structs/ContinueConditionContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContinueConditionContext {
        inline app::ContinueConditionContext__Class** type_info() {
            static app::ContinueConditionContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContinueConditionContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContinueConditionContext__Class* get_class() {
            return il2cpp::get_class<app::ContinueConditionContext__Class>(type_info(), "Moon", "ContinueConditionContext");
        }
        inline app::ContinueConditionContext* create() {
            return il2cpp::create_object<app::ContinueConditionContext>(get_class());
        }
    } // namespace ContinueConditionContext
} // namespace app::classes::types
