#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NPCCameraBlendState__Enum__Class.h>
#include <Modloader/app/structs/NPCCameraBlendState__Enum.h>

namespace app::classes::types {
    namespace NPCCameraBlendState__Enum {
        namespace {
            inline app::NPCCameraBlendState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NPCCameraBlendState__Enum__Class** type_info = &type_info_ref;
        inline app::NPCCameraBlendState__Enum__Class* get_class() {
            return il2cpp::get_class<app::NPCCameraBlendState__Enum__Class>(type_info, "Moon", "NPCCameraBlendState");
        }
        inline app::NPCCameraBlendState__Enum* create() {
            return il2cpp::create_object<app::NPCCameraBlendState__Enum>(get_class());
        }
    } // namespace NPCCameraBlendState__Enum
} // namespace app::classes::types
