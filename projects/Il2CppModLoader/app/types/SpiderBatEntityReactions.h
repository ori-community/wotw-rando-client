#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatEntityReactions {
        namespace {
            app::SpiderBatEntityReactions__Class* type_info_ref = nullptr;
        }
        app::SpiderBatEntityReactions__Class** type_info = &type_info_ref;
        inline app::SpiderBatEntityReactions__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatEntityReactions__Class>(type_info, "", "SpiderBatEntityReactions");
        }
        inline app::SpiderBatEntityReactions* create() {
            return il2cpp::create_object<app::SpiderBatEntityReactions>(get_class());
        }
    } // namespace SpiderBatEntityReactions
} // namespace app::classes::types
