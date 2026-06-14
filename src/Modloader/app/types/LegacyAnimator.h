#pragma once
#include <Modloader/app/structs/LegacyAnimator.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/LegacyAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyAnimator {
        inline app::LegacyAnimator__Class** type_info() {
            static app::LegacyAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimator__Class>(type_info(), "", "LegacyAnimator");
        }
        inline app::LegacyAnimator* create() {
            return il2cpp::create_object<app::LegacyAnimator>(get_class());
        }
        inline app::LegacyAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyAnimator__Array>(get_class(), size);
        }
        inline app::LegacyAnimator__Array* create_array(const std::vector<app::LegacyAnimator*>& items) {
            return il2cpp::array_new<app::LegacyAnimator__Array>(get_class(), items);
        }
    } // namespace LegacyAnimator
} // namespace app::classes::types
