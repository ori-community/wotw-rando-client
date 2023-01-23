#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeLimitDecorator__Class.h>
#include <Modloader/app/structs/TimeLimitDecorator.h>

namespace app::classes::types {
    namespace TimeLimitDecorator {
        namespace {
            inline app::TimeLimitDecorator__Class* type_info_ref = nullptr;
        }
        inline app::TimeLimitDecorator__Class** type_info = &type_info_ref;
        inline app::TimeLimitDecorator__Class* get_class() {
            return il2cpp::get_class<app::TimeLimitDecorator__Class>(type_info, "Moon.BehaviourSystem", "TimeLimitDecorator");
        }
        inline app::TimeLimitDecorator* create() {
            return il2cpp::create_object<app::TimeLimitDecorator>(get_class());
        }
    } // namespace TimeLimitDecorator
} // namespace app::classes::types
