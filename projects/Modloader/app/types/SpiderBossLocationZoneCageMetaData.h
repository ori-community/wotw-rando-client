#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossLocationZoneCageMetaData__Class.h>
#include <Modloader/app/structs/SpiderBossLocationZoneCageMetaData.h>

namespace app::classes::types {
    namespace SpiderBossLocationZoneCageMetaData {
        namespace {
            inline app::SpiderBossLocationZoneCageMetaData__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLocationZoneCageMetaData__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationZoneCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationZoneCageMetaData__Class>(type_info, "", "SpiderBossLocationZoneCageMetaData");
        }
        inline app::SpiderBossLocationZoneCageMetaData* create() {
            return il2cpp::create_object<app::SpiderBossLocationZoneCageMetaData>(get_class());
        }
    } // namespace SpiderBossLocationZoneCageMetaData
} // namespace app::classes::types
