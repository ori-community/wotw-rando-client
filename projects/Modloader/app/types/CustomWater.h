#pragma once
#include <Modloader/app/structs/CustomWater.h>
#include <Modloader/app/structs/CustomWater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomWater {
        inline app::CustomWater__Class** type_info() {
            static app::CustomWater__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CustomWater__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CustomWater__Class* get_class() {
            return il2cpp::get_class<app::CustomWater__Class>(type_info(), "", "CustomWater");
        }
        inline app::CustomWater* create() {
            return il2cpp::create_object<app::CustomWater>(get_class());
        }
    } // namespace CustomWater
} // namespace app::classes::types
