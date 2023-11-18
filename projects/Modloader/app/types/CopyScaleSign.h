#pragma once
#include <Modloader/app/structs/CopyScaleSign.h>
#include <Modloader/app/structs/CopyScaleSign__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CopyScaleSign {
        inline app::CopyScaleSign__Class** type_info() {
            static app::CopyScaleSign__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CopyScaleSign__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CopyScaleSign__Class* get_class() {
            return il2cpp::get_class<app::CopyScaleSign__Class>(type_info(), "", "CopyScaleSign");
        }
        inline app::CopyScaleSign* create() {
            return il2cpp::create_object<app::CopyScaleSign>(get_class());
        }
    } // namespace CopyScaleSign
} // namespace app::classes::types
