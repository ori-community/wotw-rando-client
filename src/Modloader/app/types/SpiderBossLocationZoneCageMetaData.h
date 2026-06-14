#pragma once
#include <Modloader/app/structs/SpiderBossLocationZoneCageMetaData.h>
#include <Modloader/app/structs/SpiderBossLocationZoneCageMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationZoneCageMetaData {
        inline app::SpiderBossLocationZoneCageMetaData__Class** type_info() {
            static app::SpiderBossLocationZoneCageMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocationZoneCageMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocationZoneCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationZoneCageMetaData__Class>(type_info(), "", "SpiderBossLocationZoneCageMetaData");
        }
        inline app::SpiderBossLocationZoneCageMetaData* create() {
            return il2cpp::create_object<app::SpiderBossLocationZoneCageMetaData>(get_class());
        }
    } // namespace SpiderBossLocationZoneCageMetaData
} // namespace app::classes::types
