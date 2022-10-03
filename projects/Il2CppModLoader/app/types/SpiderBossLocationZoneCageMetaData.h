#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationZoneCageMetaData {
        namespace {
            app::SpiderBossLocationZoneCageMetaData__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocationZoneCageMetaData__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationZoneCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationZoneCageMetaData__Class>(type_info, "", "SpiderBossLocationZoneCageMetaData");
        }
        inline app::SpiderBossLocationZoneCageMetaData* create() {
            return il2cpp::create_object<app::SpiderBossLocationZoneCageMetaData>(get_class());
        }
    } // namespace SpiderBossLocationZoneCageMetaData
} // namespace app::classes::types
