#pragma once
#include <Modloader/app/structs/UberPostBloomAnimator__Array.h>
#include <Modloader/app/structs/UberPostBloomAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPostBloomAnimator__Array {
        inline app::UberPostBloomAnimator__Array__Class** type_info() {
            static app::UberPostBloomAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPostBloomAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPostBloomAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPostBloomAnimator__Array__Class>(type_info(), "", "UberPostBloomAnimator[]");
        }
        inline app::UberPostBloomAnimator__Array* create() {
            return il2cpp::create_object<app::UberPostBloomAnimator__Array>(get_class());
        }
    } // namespace UberPostBloomAnimator__Array
} // namespace app::classes::types
