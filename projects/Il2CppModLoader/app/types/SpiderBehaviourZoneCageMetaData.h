#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBehaviourZoneCageMetaData {
        namespace {
            app::SpiderBehaviourZoneCageMetaData__Class* type_info_ref = nullptr;
        }
        app::SpiderBehaviourZoneCageMetaData__Class** type_info = &type_info_ref;
        inline app::SpiderBehaviourZoneCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::SpiderBehaviourZoneCageMetaData__Class>(type_info, "", "SpiderBehaviourZoneCageMetaData");
        }
        inline app::SpiderBehaviourZoneCageMetaData* create() {
            return il2cpp::create_object<app::SpiderBehaviourZoneCageMetaData>(get_class());
        }
    } // namespace SpiderBehaviourZoneCageMetaData
} // namespace app::classes::types
