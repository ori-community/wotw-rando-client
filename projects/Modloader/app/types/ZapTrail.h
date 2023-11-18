#pragma once
#include <Modloader/app/structs/ZapTrail.h>
#include <Modloader/app/structs/ZapTrail__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZapTrail {
        inline app::ZapTrail__Class** type_info() {
            static app::ZapTrail__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZapTrail__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZapTrail__Class* get_class() {
            return il2cpp::get_class<app::ZapTrail__Class>(type_info(), "", "ZapTrail");
        }
        inline app::ZapTrail* create() {
            return il2cpp::create_object<app::ZapTrail>(get_class());
        }
    } // namespace ZapTrail
} // namespace app::classes::types
