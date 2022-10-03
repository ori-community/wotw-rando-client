#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContactEmailInfo {
        namespace {
            app::ContactEmailInfo__Class* type_info_ref = nullptr;
        }
        app::ContactEmailInfo__Class** type_info = &type_info_ref;
        inline app::ContactEmailInfo__Class* get_class() {
            return il2cpp::get_class<app::ContactEmailInfo__Class>(type_info, "PlayFab.ServerModels", "ContactEmailInfo");
        }
        inline app::ContactEmailInfo* create() {
            return il2cpp::create_object<app::ContactEmailInfo>(get_class());
        }
        inline app::ContactEmailInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactEmailInfo__Array>(get_class(), size);
        }
    } // namespace ContactEmailInfo
} // namespace app::classes::types
