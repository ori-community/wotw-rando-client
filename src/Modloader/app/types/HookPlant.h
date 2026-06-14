#pragma once
#include <Modloader/app/structs/HookPlant.h>
#include <Modloader/app/structs/HookPlant__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HookPlant {
        inline app::HookPlant__Class** type_info() {
            static app::HookPlant__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HookPlant__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HookPlant__Class* get_class() {
            return il2cpp::get_class<app::HookPlant__Class>(type_info(), "", "HookPlant");
        }
        inline app::HookPlant* create() {
            return il2cpp::create_object<app::HookPlant>(get_class());
        }
    } // namespace HookPlant
} // namespace app::classes::types
