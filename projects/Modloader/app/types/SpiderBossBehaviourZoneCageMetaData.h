#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossBehaviourZoneCageMetaData__Class.h>
#include <Modloader/app/structs/SpiderBossBehaviourZoneCageMetaData.h>

namespace app::classes::types {
    namespace SpiderBossBehaviourZoneCageMetaData {
        namespace {
            inline app::SpiderBossBehaviourZoneCageMetaData__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossBehaviourZoneCageMetaData__Class** type_info = &type_info_ref;
        inline app::SpiderBossBehaviourZoneCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBehaviourZoneCageMetaData__Class>(type_info, "", "SpiderBossBehaviourZoneCageMetaData");
        }
        inline app::SpiderBossBehaviourZoneCageMetaData* create() {
            return il2cpp::create_object<app::SpiderBossBehaviourZoneCageMetaData>(get_class());
        }
    } // namespace SpiderBossBehaviourZoneCageMetaData
} // namespace app::classes::types
