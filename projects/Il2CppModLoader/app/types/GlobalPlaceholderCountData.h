#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlobalPlaceholderCountData {
        namespace {
            app::GlobalPlaceholderCountData__Class* type_info_ref = nullptr;
        }
        app::GlobalPlaceholderCountData__Class** type_info = &type_info_ref;
        inline app::GlobalPlaceholderCountData__Class* get_class() {
            return il2cpp::get_class<app::GlobalPlaceholderCountData__Class>(type_info, "", "GlobalPlaceholderCountData");
        }
        inline app::GlobalPlaceholderCountData* create() {
            return il2cpp::create_object<app::GlobalPlaceholderCountData>(get_class());
        }
    } // namespace GlobalPlaceholderCountData
} // namespace app::classes::types
