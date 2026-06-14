#pragma once
#include <Modloader/app/structs/GrounderBipedIK.h>
#include <Modloader/app/structs/GrounderBipedIK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrounderBipedIK {
        inline app::GrounderBipedIK__Class** type_info() {
            static app::GrounderBipedIK__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrounderBipedIK__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrounderBipedIK__Class* get_class() {
            return il2cpp::get_class<app::GrounderBipedIK__Class>(type_info(), "RootMotion.FinalIK", "GrounderBipedIK");
        }
        inline app::GrounderBipedIK* create() {
            return il2cpp::create_object<app::GrounderBipedIK>(get_class());
        }
    } // namespace GrounderBipedIK
} // namespace app::classes::types
