#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatPlaceholder {
        namespace {
            app::SpiderBatPlaceholder__Class* type_info_ref = nullptr;
        }
        app::SpiderBatPlaceholder__Class** type_info = &type_info_ref;
        inline app::SpiderBatPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatPlaceholder__Class>(type_info, "", "SpiderBatPlaceholder");
        }
        inline app::SpiderBatPlaceholder* create() {
            return il2cpp::create_object<app::SpiderBatPlaceholder>(get_class());
        }
    } // namespace SpiderBatPlaceholder
} // namespace app::classes::types
