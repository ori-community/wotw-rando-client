#pragma once
#include <Modloader/app/structs/SpiderBatAcidSprayBehaviour.h>
#include <Modloader/app/structs/SpiderBatAcidSprayBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatAcidSprayBehaviour {
        inline app::SpiderBatAcidSprayBehaviour__Class** type_info() {
            static app::SpiderBatAcidSprayBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatAcidSprayBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatAcidSprayBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatAcidSprayBehaviour__Class>(type_info(), "", "SpiderBatAcidSprayBehaviour");
        }
        inline app::SpiderBatAcidSprayBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatAcidSprayBehaviour>(get_class());
        }
    } // namespace SpiderBatAcidSprayBehaviour
} // namespace app::classes::types
