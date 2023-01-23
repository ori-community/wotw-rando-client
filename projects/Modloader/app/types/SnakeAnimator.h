#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SnakeAnimator__Class.h>
#include <Modloader/app/structs/SnakeAnimator.h>

namespace app::classes::types {
    namespace SnakeAnimator {
        namespace {
            inline app::SnakeAnimator__Class* type_info_ref = nullptr;
        }
        inline app::SnakeAnimator__Class** type_info = &type_info_ref;
        inline app::SnakeAnimator__Class* get_class() {
            return il2cpp::get_class<app::SnakeAnimator__Class>(type_info, "UnityEngine", "SnakeAnimator");
        }
        inline app::SnakeAnimator* create() {
            return il2cpp::create_object<app::SnakeAnimator>(get_class());
        }
    } // namespace SnakeAnimator
} // namespace app::classes::types
