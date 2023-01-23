#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimescaleAnimator__Class.h>
#include <Modloader/app/structs/TimescaleAnimator.h>

namespace app::classes::types {
    namespace TimescaleAnimator {
        namespace {
            inline app::TimescaleAnimator__Class* type_info_ref = nullptr;
        }
        inline app::TimescaleAnimator__Class** type_info = &type_info_ref;
        inline app::TimescaleAnimator__Class* get_class() {
            return il2cpp::get_class<app::TimescaleAnimator__Class>(type_info, "Moon.Timeline", "TimescaleAnimator");
        }
        inline app::TimescaleAnimator* create() {
            return il2cpp::create_object<app::TimescaleAnimator>(get_class());
        }
    } // namespace TimescaleAnimator
} // namespace app::classes::types
