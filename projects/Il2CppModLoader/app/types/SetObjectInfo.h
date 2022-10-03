#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetObjectInfo {
        namespace {
            app::SetObjectInfo__Class* type_info_ref = nullptr;
        }
        app::SetObjectInfo__Class** type_info = &type_info_ref;
        inline app::SetObjectInfo__Class* get_class() {
            return il2cpp::get_class<app::SetObjectInfo__Class>(type_info, "PlayFab.DataModels", "SetObjectInfo");
        }
        inline app::SetObjectInfo* create() {
            return il2cpp::create_object<app::SetObjectInfo>(get_class());
        }
        inline app::SetObjectInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SetObjectInfo__Array>(get_class(), size);
        }
    } // namespace SetObjectInfo
} // namespace app::classes::types
