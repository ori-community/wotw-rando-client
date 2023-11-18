#pragma once
#include <Modloader/app/structs/AkCommonOutputSettings_PanningRule__Enum.h>
#include <Modloader/app/structs/AkCommonOutputSettings_PanningRule__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCommonOutputSettings_PanningRule__Enum {
        inline app::AkCommonOutputSettings_PanningRule__Enum__Class** type_info() {
            static app::AkCommonOutputSettings_PanningRule__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkCommonOutputSettings_PanningRule__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkCommonOutputSettings_PanningRule__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCommonOutputSettings_PanningRule__Enum__Class>(type_info(), "", "AkCommonOutputSettings", "PanningRule");
        }
        inline app::AkCommonOutputSettings_PanningRule__Enum* create() {
            return il2cpp::create_object<app::AkCommonOutputSettings_PanningRule__Enum>(get_class());
        }
    } // namespace AkCommonOutputSettings_PanningRule__Enum
} // namespace app::classes::types
