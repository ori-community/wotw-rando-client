#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TouchPhase__Enum__Class.h>
#include <Modloader/app/structs/TouchPhase__Enum.h>

namespace app::classes::types {
    namespace TouchPhase__Enum {
        namespace {
            inline app::TouchPhase__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TouchPhase__Enum__Class** type_info = &type_info_ref;
        inline app::TouchPhase__Enum__Class* get_class() {
            return il2cpp::get_class<app::TouchPhase__Enum__Class>(type_info, "UnityEngine", "TouchPhase");
        }
        inline app::TouchPhase__Enum* create() {
            return il2cpp::create_object<app::TouchPhase__Enum>(get_class());
        }
    } // namespace TouchPhase__Enum
} // namespace app::classes::types
