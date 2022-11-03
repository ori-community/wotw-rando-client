#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Region__Enum_3 {
        namespace {
            inline app::Region__Enum_3__Class* type_info_ref = nullptr;
        }
        inline app::Region__Enum_3__Class** type_info = &type_info_ref;
        inline app::Region__Enum_3__Class* get_class() {
            return il2cpp::get_class<app::Region__Enum_3__Class>(type_info, "PlayFab.PlayStreamModels", "Region");
        }
        inline app::Region__Enum_3* create() {
            return il2cpp::create_object<app::Region__Enum_3>(get_class());
        }
        inline app::Region__Enum_3__Array* create_array(int size) {
            return il2cpp::array_new<app::Region__Enum_3__Array>(get_class(), size);
        }
        inline app::Region__Enum_3__Array* create_array(const std::vector<app::Region__Enum_3*>& items) {
            return il2cpp::array_new<app::Region__Enum_3__Array>(get_class(), items);
        }
    } // namespace Region__Enum_3
} // namespace app::classes::types
