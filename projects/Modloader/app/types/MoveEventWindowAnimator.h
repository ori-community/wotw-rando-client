#pragma once
#include <Modloader/app/structs/MoveEventWindowAnimator.h>
#include <Modloader/app/structs/MoveEventWindowAnimator__Array.h>
#include <Modloader/app/structs/MoveEventWindowAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveEventWindowAnimator {
        inline app::MoveEventWindowAnimator__Class** type_info() {
            static app::MoveEventWindowAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveEventWindowAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveEventWindowAnimator__Class* get_class() {
            return il2cpp::get_class<app::MoveEventWindowAnimator__Class>(type_info(), "Moon.Timeline", "MoveEventWindowAnimator");
        }
        inline app::MoveEventWindowAnimator* create() {
            return il2cpp::create_object<app::MoveEventWindowAnimator>(get_class());
        }
        inline app::MoveEventWindowAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::MoveEventWindowAnimator__Array>(get_class(), size);
        }
        inline app::MoveEventWindowAnimator__Array* create_array(const std::vector<app::MoveEventWindowAnimator*>& items) {
            return il2cpp::array_new<app::MoveEventWindowAnimator__Array>(get_class(), items);
        }
    } // namespace MoveEventWindowAnimator
} // namespace app::classes::types
