#pragma once
#include <Modloader/app/structs/Path2d.h>
#include <Modloader/app/structs/Path2d__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Path2d {
        inline app::Path2d__Class** type_info() {
            static app::Path2d__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Path2d__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Path2d__Class* get_class() {
            return il2cpp::get_class<app::Path2d__Class>(type_info(), "", "Path2d");
        }
        inline app::Path2d* create() {
            return il2cpp::create_object<app::Path2d>(get_class());
        }
    } // namespace Path2d
} // namespace app::classes::types
