#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Video3DLayout__Enum__Class.h>
#include <Modloader/app/structs/Video3DLayout__Enum.h>

namespace app::classes::types {
    namespace Video3DLayout__Enum {
        namespace {
            inline app::Video3DLayout__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Video3DLayout__Enum__Class** type_info = &type_info_ref;
        inline app::Video3DLayout__Enum__Class* get_class() {
            return il2cpp::get_class<app::Video3DLayout__Enum__Class>(type_info, "UnityEngine.Video", "Video3DLayout");
        }
        inline app::Video3DLayout__Enum* create() {
            return il2cpp::create_object<app::Video3DLayout__Enum>(get_class());
        }
    } // namespace Video3DLayout__Enum
} // namespace app::classes::types
