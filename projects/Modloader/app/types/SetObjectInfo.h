#pragma once
#include <Modloader/app/structs/SetObjectInfo.h>
#include <Modloader/app/structs/SetObjectInfo__Array.h>
#include <Modloader/app/structs/SetObjectInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetObjectInfo {
        inline app::SetObjectInfo__Class** type_info() {
            static app::SetObjectInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetObjectInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetObjectInfo__Class* get_class() {
            return il2cpp::get_class<app::SetObjectInfo__Class>(type_info(), "PlayFab.DataModels", "SetObjectInfo");
        }
        inline app::SetObjectInfo* create() {
            return il2cpp::create_object<app::SetObjectInfo>(get_class());
        }
        inline app::SetObjectInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SetObjectInfo__Array>(get_class(), size);
        }
        inline app::SetObjectInfo__Array* create_array(const std::vector<app::SetObjectInfo*>& items) {
            return il2cpp::array_new<app::SetObjectInfo__Array>(get_class(), items);
        }
    } // namespace SetObjectInfo
} // namespace app::classes::types
