#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DestroyWhenOutsideActiveBoundaries {
        namespace {
            inline app::DestroyWhenOutsideActiveBoundaries__Class* type_info_ref = nullptr;
        }
        inline app::DestroyWhenOutsideActiveBoundaries__Class** type_info = &type_info_ref;
        inline app::DestroyWhenOutsideActiveBoundaries__Class* get_class() {
            return il2cpp::get_class<app::DestroyWhenOutsideActiveBoundaries__Class>(type_info, "", "DestroyWhenOutsideActiveBoundaries");
        }
        inline app::DestroyWhenOutsideActiveBoundaries* create() {
            return il2cpp::create_object<app::DestroyWhenOutsideActiveBoundaries>(get_class());
        }
    } // namespace DestroyWhenOutsideActiveBoundaries
} // namespace app::classes::types
