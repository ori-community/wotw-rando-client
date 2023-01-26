#pragma once
#include <Modloader/app/structs/CaptureFlags__Enum.h>
#include <Modloader/app/structs/CaptureFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CaptureFlags__Enum {
        inline app::CaptureFlags__Enum__Class** type_info() {
            static app::CaptureFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CaptureFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CaptureFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::CaptureFlags__Enum__Class>(type_info(), "UnityEngine.Profiling.Memory.Experimental", "CaptureFlags");
        }
        inline app::CaptureFlags__Enum* create() {
            return il2cpp::create_object<app::CaptureFlags__Enum>(get_class());
        }
    } // namespace CaptureFlags__Enum
} // namespace app::classes::types
