#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBehaviourZoneCageMetaData__Class.h>
#include <Modloader/app/structs/SpiderBehaviourZoneCageMetaData.h>

namespace app::classes::types {
    namespace SpiderBehaviourZoneCageMetaData {
        namespace {
            inline app::SpiderBehaviourZoneCageMetaData__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBehaviourZoneCageMetaData__Class** type_info = &type_info_ref;
        inline app::SpiderBehaviourZoneCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::SpiderBehaviourZoneCageMetaData__Class>(type_info, "", "SpiderBehaviourZoneCageMetaData");
        }
        inline app::SpiderBehaviourZoneCageMetaData* create() {
            return il2cpp::create_object<app::SpiderBehaviourZoneCageMetaData>(get_class());
        }
    } // namespace SpiderBehaviourZoneCageMetaData
} // namespace app::classes::types
