#pragma once
#include <Modloader/app/structs/TwistRelaxer.h>
#include <Modloader/app/structs/TwistRelaxer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TwistRelaxer {
        inline app::TwistRelaxer__Class** type_info() {
            static app::TwistRelaxer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TwistRelaxer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TwistRelaxer__Class* get_class() {
            return il2cpp::get_class<app::TwistRelaxer__Class>(type_info(), "RootMotion.FinalIK", "TwistRelaxer");
        }
        inline app::TwistRelaxer* create() {
            return il2cpp::create_object<app::TwistRelaxer>(get_class());
        }
    } // namespace TwistRelaxer
} // namespace app::classes::types
