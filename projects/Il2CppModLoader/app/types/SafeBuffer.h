#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SafeBuffer {
        namespace {
            inline app::SafeBuffer__Class* type_info_ref = nullptr;
        }
        inline app::SafeBuffer__Class** type_info = &type_info_ref;
        inline app::SafeBuffer__Class* get_class() {
            return il2cpp::get_class<app::SafeBuffer__Class>(type_info, "System.Runtime.InteropServices", "SafeBuffer");
        }
        inline app::SafeBuffer* create() {
            return il2cpp::create_object<app::SafeBuffer>(get_class());
        }
    } // namespace SafeBuffer
} // namespace app::classes::types
