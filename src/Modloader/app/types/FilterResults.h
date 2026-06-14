#pragma once
#include <Modloader/app/structs/FilterResults.h>
#include <Modloader/app/structs/FilterResults__Boxed.h>
#include <Modloader/app/structs/FilterResults__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FilterResults {
        inline app::FilterResults__Class** type_info() {
            static app::FilterResults__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FilterResults__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FilterResults__Class* get_class() {
            return il2cpp::get_class<app::FilterResults__Class>(type_info(), "UnityEngine.Experimental.Rendering", "FilterResults");
        }
        inline app::FilterResults* create() {
            return il2cpp::create_object<app::FilterResults>(get_class());
        }
        inline app::FilterResults__Boxed* box(app::FilterResults value) {
            return il2cpp::box_value<app::FilterResults__Boxed>(get_class(), value);
        }
    } // namespace FilterResults
} // namespace app::classes::types
