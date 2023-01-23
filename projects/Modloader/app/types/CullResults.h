#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CullResults__Class.h>
#include <Modloader/app/structs/CullResults.h>
#include <Modloader/app/structs/CullResults__Boxed.h>

namespace app::classes::types {
    namespace CullResults {
        namespace {
            inline app::CullResults__Class* type_info_ref = nullptr;
        }
        inline app::CullResults__Class** type_info = &type_info_ref;
        inline app::CullResults__Class* get_class() {
            return il2cpp::get_class<app::CullResults__Class>(type_info, "UnityEngine.Experimental.Rendering", "CullResults");
        }
        inline app::CullResults* create() {
            return il2cpp::create_object<app::CullResults>(get_class());
        }
        inline app::CullResults__Boxed* box(app::CullResults value) {
            return il2cpp::box_value<app::CullResults__Boxed>(get_class(), value);
        }
    } // namespace CullResults
} // namespace app::classes::types
