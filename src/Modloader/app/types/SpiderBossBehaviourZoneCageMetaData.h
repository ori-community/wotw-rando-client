#pragma once
#include <Modloader/app/structs/SpiderBossBehaviourZoneCageMetaData.h>
#include <Modloader/app/structs/SpiderBossBehaviourZoneCageMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossBehaviourZoneCageMetaData {
        inline app::SpiderBossBehaviourZoneCageMetaData__Class** type_info() {
            static app::SpiderBossBehaviourZoneCageMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossBehaviourZoneCageMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossBehaviourZoneCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBehaviourZoneCageMetaData__Class>(type_info(), "", "SpiderBossBehaviourZoneCageMetaData");
        }
        inline app::SpiderBossBehaviourZoneCageMetaData* create() {
            return il2cpp::create_object<app::SpiderBossBehaviourZoneCageMetaData>(get_class());
        }
    } // namespace SpiderBossBehaviourZoneCageMetaData
} // namespace app::classes::types
