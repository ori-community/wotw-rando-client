#pragma once
#include <Modloader/app/structs/DrivenAlpha.h>
#include <Modloader/app/structs/DrivenAlpha__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrivenAlpha {
        inline app::DrivenAlpha__Class** type_info() {
            static app::DrivenAlpha__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrivenAlpha__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrivenAlpha__Class* get_class() {
            return il2cpp::get_class<app::DrivenAlpha__Class>(type_info(), "Moon", "DrivenAlpha");
        }
        inline app::DrivenAlpha* create() {
            return il2cpp::create_object<app::DrivenAlpha>(get_class());
        }
    } // namespace DrivenAlpha
} // namespace app::classes::types
