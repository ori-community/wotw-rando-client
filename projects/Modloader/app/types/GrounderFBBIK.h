#pragma once
#include <Modloader/app/structs/GrounderFBBIK.h>
#include <Modloader/app/structs/GrounderFBBIK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrounderFBBIK {
        inline app::GrounderFBBIK__Class** type_info() {
            static app::GrounderFBBIK__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrounderFBBIK__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrounderFBBIK__Class* get_class() {
            return il2cpp::get_class<app::GrounderFBBIK__Class>(type_info(), "RootMotion.FinalIK", "GrounderFBBIK");
        }
        inline app::GrounderFBBIK* create() {
            return il2cpp::create_object<app::GrounderFBBIK>(get_class());
        }
    } // namespace GrounderFBBIK
} // namespace app::classes::types
