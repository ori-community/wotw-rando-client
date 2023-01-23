#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetObjectInfo__Class.h>
#include <Modloader/app/structs/SetObjectInfo.h>
#include <Modloader/app/structs/SetObjectInfo__Array.h>

namespace app::classes::types {
    namespace SetObjectInfo {
        namespace {
            inline app::SetObjectInfo__Class* type_info_ref = nullptr;
        }
        inline app::SetObjectInfo__Class** type_info = &type_info_ref;
        inline app::SetObjectInfo__Class* get_class() {
            return il2cpp::get_class<app::SetObjectInfo__Class>(type_info, "PlayFab.DataModels", "SetObjectInfo");
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
