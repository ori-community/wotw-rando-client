#pragma once
#include <Modloader/app/structs/UberWaterTop__Array.h>
#include <Modloader/app/structs/UberWaterTop__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterTop__Array {
        inline app::UberWaterTop__Array__Class** type_info() {
            static app::UberWaterTop__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterTop__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterTop__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterTop__Array__Class>(type_info(), "", "UberWaterTop[]");
        }
        inline app::UberWaterTop__Array* create() {
            return il2cpp::create_object<app::UberWaterTop__Array>(get_class());
        }
    } // namespace UberWaterTop__Array
} // namespace app::classes::types
