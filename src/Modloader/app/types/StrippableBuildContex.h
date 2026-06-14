#pragma once
#include <Modloader/app/structs/StrippableBuildContex.h>
#include <Modloader/app/structs/StrippableBuildContex__Boxed.h>
#include <Modloader/app/structs/StrippableBuildContex__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StrippableBuildContex {
        inline app::StrippableBuildContex__Class** type_info() {
            static app::StrippableBuildContex__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StrippableBuildContex__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StrippableBuildContex__Class* get_class() {
            return il2cpp::get_class<app::StrippableBuildContex__Class>(type_info(), "", "StrippableBuildContex");
        }
        inline app::StrippableBuildContex* create() {
            return il2cpp::create_object<app::StrippableBuildContex>(get_class());
        }
        inline app::StrippableBuildContex__Boxed* box(app::StrippableBuildContex value) {
            return il2cpp::box_value<app::StrippableBuildContex__Boxed>(get_class(), value);
        }
    } // namespace StrippableBuildContex
} // namespace app::classes::types
