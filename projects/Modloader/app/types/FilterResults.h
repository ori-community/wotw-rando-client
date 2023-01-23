#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FilterResults__Class.h>
#include <Modloader/app/structs/FilterResults.h>
#include <Modloader/app/structs/FilterResults__Boxed.h>

namespace app::classes::types {
    namespace FilterResults {
        namespace {
            inline app::FilterResults__Class* type_info_ref = nullptr;
        }
        inline app::FilterResults__Class** type_info = &type_info_ref;
        inline app::FilterResults__Class* get_class() {
            return il2cpp::get_class<app::FilterResults__Class>(type_info, "UnityEngine.Experimental.Rendering", "FilterResults");
        }
        inline app::FilterResults* create() {
            return il2cpp::create_object<app::FilterResults>(get_class());
        }
        inline app::FilterResults__Boxed* box(app::FilterResults value) {
            return il2cpp::box_value<app::FilterResults__Boxed>(get_class(), value);
        }
    } // namespace FilterResults
} // namespace app::classes::types
