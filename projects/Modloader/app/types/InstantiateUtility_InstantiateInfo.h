#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiateUtility_InstantiateInfo {
        namespace {
            inline app::InstantiateUtility_InstantiateInfo__Class* type_info_ref = nullptr;
        }
        inline app::InstantiateUtility_InstantiateInfo__Class** type_info = &type_info_ref;
        inline app::InstantiateUtility_InstantiateInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiateUtility_InstantiateInfo__Class>(type_info, "", "InstantiateUtility", "InstantiateInfo");
        }
        inline app::InstantiateUtility_InstantiateInfo* create() {
            return il2cpp::create_object<app::InstantiateUtility_InstantiateInfo>(get_class());
        }
        inline app::InstantiateUtility_InstantiateInfo__Boxed* box(app::InstantiateUtility_InstantiateInfo value) {
            return il2cpp::box_value<app::InstantiateUtility_InstantiateInfo__Boxed>(get_class(), value);
        }
    } // namespace InstantiateUtility_InstantiateInfo
} // namespace app::classes::types
