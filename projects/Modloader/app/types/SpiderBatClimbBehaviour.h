#pragma once
#include <Modloader/app/structs/SpiderBatClimbBehaviour.h>
#include <Modloader/app/structs/SpiderBatClimbBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatClimbBehaviour {
        inline app::SpiderBatClimbBehaviour__Class** type_info() {
            static app::SpiderBatClimbBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatClimbBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatClimbBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatClimbBehaviour__Class>(type_info(), "", "SpiderBatClimbBehaviour");
        }
        inline app::SpiderBatClimbBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatClimbBehaviour>(get_class());
        }
    } // namespace SpiderBatClimbBehaviour
} // namespace app::classes::types
