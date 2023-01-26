#pragma once
#include <Modloader/app/structs/GrounderIK.h>
#include <Modloader/app/structs/GrounderIK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrounderIK {
        inline app::GrounderIK__Class** type_info() {
            static app::GrounderIK__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrounderIK__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrounderIK__Class* get_class() {
            return il2cpp::get_class<app::GrounderIK__Class>(type_info(), "RootMotion.FinalIK", "GrounderIK");
        }
        inline app::GrounderIK* create() {
            return il2cpp::create_object<app::GrounderIK>(get_class());
        }
    } // namespace GrounderIK
} // namespace app::classes::types
