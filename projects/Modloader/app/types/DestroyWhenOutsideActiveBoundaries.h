#pragma once
#include <Modloader/app/structs/DestroyWhenOutsideActiveBoundaries.h>
#include <Modloader/app/structs/DestroyWhenOutsideActiveBoundaries__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyWhenOutsideActiveBoundaries {
        inline app::DestroyWhenOutsideActiveBoundaries__Class** type_info() {
            static app::DestroyWhenOutsideActiveBoundaries__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyWhenOutsideActiveBoundaries__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyWhenOutsideActiveBoundaries__Class* get_class() {
            return il2cpp::get_class<app::DestroyWhenOutsideActiveBoundaries__Class>(type_info(), "", "DestroyWhenOutsideActiveBoundaries");
        }
        inline app::DestroyWhenOutsideActiveBoundaries* create() {
            return il2cpp::create_object<app::DestroyWhenOutsideActiveBoundaries>(get_class());
        }
    } // namespace DestroyWhenOutsideActiveBoundaries
} // namespace app::classes::types
