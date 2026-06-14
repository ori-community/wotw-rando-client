#pragma once
#include <Modloader/app/structs/UberBloomAnimator__Array.h>
#include <Modloader/app/structs/UberBloomAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberBloomAnimator__Array {
        inline app::UberBloomAnimator__Array__Class** type_info() {
            static app::UberBloomAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberBloomAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberBloomAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::UberBloomAnimator__Array__Class>(type_info(), "", "UberBloomAnimator[]");
        }
        inline app::UberBloomAnimator__Array* create() {
            return il2cpp::create_object<app::UberBloomAnimator__Array>(get_class());
        }
    } // namespace UberBloomAnimator__Array
} // namespace app::classes::types
