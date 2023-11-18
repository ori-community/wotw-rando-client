#pragma once
#include <Modloader/app/structs/AlphaBlendModeEntity_AlphaBlendTargetType__Enum.h>
#include <Modloader/app/structs/AlphaBlendModeEntity_AlphaBlendTargetType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlphaBlendModeEntity_AlphaBlendTargetType__Enum {
        inline app::AlphaBlendModeEntity_AlphaBlendTargetType__Enum__Class** type_info() {
            static app::AlphaBlendModeEntity_AlphaBlendTargetType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AlphaBlendModeEntity_AlphaBlendTargetType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AlphaBlendModeEntity_AlphaBlendTargetType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AlphaBlendModeEntity_AlphaBlendTargetType__Enum__Class>(type_info(), "Moon.Timeline", "AlphaBlendModeEntity", "AlphaBlendTargetType");
        }
        inline app::AlphaBlendModeEntity_AlphaBlendTargetType__Enum* create() {
            return il2cpp::create_object<app::AlphaBlendModeEntity_AlphaBlendTargetType__Enum>(get_class());
        }
    } // namespace AlphaBlendModeEntity_AlphaBlendTargetType__Enum
} // namespace app::classes::types
