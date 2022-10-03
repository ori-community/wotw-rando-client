#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CaptureFlags__Enum {
        namespace {
            app::CaptureFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::CaptureFlags__Enum__Class** type_info = &type_info_ref;
        inline app::CaptureFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::CaptureFlags__Enum__Class>(type_info, "UnityEngine.Profiling.Memory.Experimental", "CaptureFlags");
        }
        inline app::CaptureFlags__Enum* create() {
            return il2cpp::create_object<app::CaptureFlags__Enum>(get_class());
        }
    } // namespace CaptureFlags__Enum
} // namespace app::classes::types
