#pragma once
#include <Modloader/app/structs/SpiderBatSprayShotBehaviour.h>
#include <Modloader/app/structs/SpiderBatSprayShotBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatSprayShotBehaviour {
        inline app::SpiderBatSprayShotBehaviour__Class** type_info() {
            static app::SpiderBatSprayShotBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatSprayShotBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatSprayShotBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatSprayShotBehaviour__Class>(type_info(), "", "SpiderBatSprayShotBehaviour");
        }
        inline app::SpiderBatSprayShotBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatSprayShotBehaviour>(get_class());
        }
    } // namespace SpiderBatSprayShotBehaviour
} // namespace app::classes::types
