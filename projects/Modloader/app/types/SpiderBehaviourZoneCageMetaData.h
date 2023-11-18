#pragma once
#include <Modloader/app/structs/SpiderBehaviourZoneCageMetaData.h>
#include <Modloader/app/structs/SpiderBehaviourZoneCageMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBehaviourZoneCageMetaData {
        inline app::SpiderBehaviourZoneCageMetaData__Class** type_info() {
            static app::SpiderBehaviourZoneCageMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBehaviourZoneCageMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBehaviourZoneCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::SpiderBehaviourZoneCageMetaData__Class>(type_info(), "", "SpiderBehaviourZoneCageMetaData");
        }
        inline app::SpiderBehaviourZoneCageMetaData* create() {
            return il2cpp::create_object<app::SpiderBehaviourZoneCageMetaData>(get_class());
        }
    } // namespace SpiderBehaviourZoneCageMetaData
} // namespace app::classes::types
