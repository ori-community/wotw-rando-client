#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ContinueConditionContext__Class.h>
#include <Modloader/app/structs/ContinueConditionContext.h>

namespace app::classes::types {
    namespace ContinueConditionContext {
        namespace {
            inline app::ContinueConditionContext__Class* type_info_ref = nullptr;
        }
        inline app::ContinueConditionContext__Class** type_info = &type_info_ref;
        inline app::ContinueConditionContext__Class* get_class() {
            return il2cpp::get_class<app::ContinueConditionContext__Class>(type_info, "Moon", "ContinueConditionContext");
        }
        inline app::ContinueConditionContext* create() {
            return il2cpp::create_object<app::ContinueConditionContext>(get_class());
        }
    } // namespace ContinueConditionContext
} // namespace app::classes::types
