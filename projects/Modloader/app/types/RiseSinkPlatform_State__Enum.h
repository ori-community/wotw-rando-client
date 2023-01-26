#pragma once
#include <Modloader/app/structs/RiseSinkPlatform_State__Enum.h>
#include <Modloader/app/structs/RiseSinkPlatform_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RiseSinkPlatform_State__Enum {
        inline app::RiseSinkPlatform_State__Enum__Class** type_info() {
            static app::RiseSinkPlatform_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RiseSinkPlatform_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RiseSinkPlatform_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RiseSinkPlatform_State__Enum__Class>(type_info(), "", "RiseSinkPlatform", "State");
        }
        inline app::RiseSinkPlatform_State__Enum* create() {
            return il2cpp::create_object<app::RiseSinkPlatform_State__Enum>(get_class());
        }
    } // namespace RiseSinkPlatform_State__Enum
} // namespace app::classes::types
