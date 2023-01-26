#pragma once
#include <Modloader/app/structs/BodyTilt.h>
#include <Modloader/app/structs/BodyTilt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BodyTilt {
        inline app::BodyTilt__Class** type_info() {
            static app::BodyTilt__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BodyTilt__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BodyTilt__Class* get_class() {
            return il2cpp::get_class<app::BodyTilt__Class>(type_info(), "RootMotion.FinalIK", "BodyTilt");
        }
        inline app::BodyTilt* create() {
            return il2cpp::create_object<app::BodyTilt>(get_class());
        }
    } // namespace BodyTilt
} // namespace app::classes::types
