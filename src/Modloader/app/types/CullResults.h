#pragma once
#include <Modloader/app/structs/CullResults.h>
#include <Modloader/app/structs/CullResults__Boxed.h>
#include <Modloader/app/structs/CullResults__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CullResults {
        inline app::CullResults__Class** type_info() {
            static app::CullResults__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CullResults__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CullResults__Class* get_class() {
            return il2cpp::get_class<app::CullResults__Class>(type_info(), "UnityEngine.Experimental.Rendering", "CullResults");
        }
        inline app::CullResults* create() {
            return il2cpp::create_object<app::CullResults>(get_class());
        }
        inline app::CullResults__Boxed* box(app::CullResults value) {
            return il2cpp::box_value<app::CullResults__Boxed>(get_class(), value);
        }
    } // namespace CullResults
} // namespace app::classes::types
