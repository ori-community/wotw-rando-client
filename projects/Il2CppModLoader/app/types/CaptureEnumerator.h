#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CaptureEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CaptureEnumerator__Class** type_info;
        inline app::CaptureEnumerator__Class* get_class() {
            return il2cpp::get_class<app::CaptureEnumerator__Class>(type_info, "System.Text.RegularExpressions", "CaptureEnumerator");
        }
        inline app::CaptureEnumerator* create() {
            return il2cpp::create_object<app::CaptureEnumerator>(get_class());
        }
    } // namespace CaptureEnumerator
} // namespace app::classes::types
