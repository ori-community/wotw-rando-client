#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderlingPlaceholder {
        namespace {
            app::SpiderlingPlaceholder__Class* type_info_ref = nullptr;
        }
        app::SpiderlingPlaceholder__Class** type_info = &type_info_ref;
        inline app::SpiderlingPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingPlaceholder__Class>(type_info, "", "SpiderlingPlaceholder");
        }
        inline app::SpiderlingPlaceholder* create() {
            return il2cpp::create_object<app::SpiderlingPlaceholder>(get_class());
        }
    } // namespace SpiderlingPlaceholder
} // namespace app::classes::types
