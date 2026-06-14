#pragma once
#include <Modloader/app/structs/Trigger_1.h>
#include <Modloader/app/structs/Trigger_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Trigger_1 {
        inline app::Trigger_1__Class** type_info() {
            static app::Trigger_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Trigger_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Trigger_1__Class* get_class() {
            return il2cpp::get_class<app::Trigger_1__Class>(type_info(), "", "Trigger");
        }
        inline app::Trigger_1* create() {
            return il2cpp::create_object<app::Trigger_1>(get_class());
        }
    } // namespace Trigger_1
} // namespace app::classes::types
