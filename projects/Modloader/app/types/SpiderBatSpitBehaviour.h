#pragma once
#include <Modloader/app/structs/SpiderBatSpitBehaviour.h>
#include <Modloader/app/structs/SpiderBatSpitBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatSpitBehaviour {
        inline app::SpiderBatSpitBehaviour__Class** type_info() {
            static app::SpiderBatSpitBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatSpitBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatSpitBehaviour__Class>(type_info(), "", "SpiderBatSpitBehaviour");
        }
        inline app::SpiderBatSpitBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatSpitBehaviour>(get_class());
        }
    } // namespace SpiderBatSpitBehaviour
} // namespace app::classes::types
