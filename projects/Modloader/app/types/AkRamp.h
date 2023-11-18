#pragma once
#include <Modloader/app/structs/AkRamp.h>
#include <Modloader/app/structs/AkRamp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkRamp {
        inline app::AkRamp__Class** type_info() {
            static app::AkRamp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkRamp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkRamp__Class* get_class() {
            return il2cpp::get_class<app::AkRamp__Class>(type_info(), "", "AkRamp");
        }
        inline app::AkRamp* create() {
            return il2cpp::create_object<app::AkRamp>(get_class());
        }
    } // namespace AkRamp
} // namespace app::classes::types
