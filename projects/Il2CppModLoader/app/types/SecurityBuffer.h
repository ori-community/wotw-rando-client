#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SecurityBuffer {
        namespace {
            inline app::SecurityBuffer__Class* type_info_ref = nullptr;
        }
        inline app::SecurityBuffer__Class** type_info = &type_info_ref;
        inline app::SecurityBuffer__Class* get_class() {
            return il2cpp::get_class<app::SecurityBuffer__Class>(type_info, "System.Net", "SecurityBuffer");
        }
        inline app::SecurityBuffer* create() {
            return il2cpp::create_object<app::SecurityBuffer>(get_class());
        }
    } // namespace SecurityBuffer
} // namespace app::classes::types
