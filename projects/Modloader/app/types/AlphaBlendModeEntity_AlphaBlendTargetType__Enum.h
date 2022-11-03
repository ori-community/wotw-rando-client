#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AlphaBlendModeEntity_AlphaBlendTargetType__Enum {
        namespace {
            inline app::AlphaBlendModeEntity_AlphaBlendTargetType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AlphaBlendModeEntity_AlphaBlendTargetType__Enum__Class** type_info = &type_info_ref;
        inline app::AlphaBlendModeEntity_AlphaBlendTargetType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AlphaBlendModeEntity_AlphaBlendTargetType__Enum__Class>(type_info, "Moon.Timeline", "AlphaBlendModeEntity", "AlphaBlendTargetType");
        }
        inline app::AlphaBlendModeEntity_AlphaBlendTargetType__Enum* create() {
            return il2cpp::create_object<app::AlphaBlendModeEntity_AlphaBlendTargetType__Enum>(get_class());
        }
    } // namespace AlphaBlendModeEntity_AlphaBlendTargetType__Enum
} // namespace app::classes::types
