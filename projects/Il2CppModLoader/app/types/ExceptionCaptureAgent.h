#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExceptionCaptureAgent__Class** type_info;
        inline app::ExceptionCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::ExceptionCaptureAgent__Class>(type_info, "", "ExceptionCaptureAgent");
        }
        inline app::ExceptionCaptureAgent* create() {
            return il2cpp::create_object<app::ExceptionCaptureAgent>(get_class());
        }
    } // namespace ExceptionCaptureAgent
} // namespace app::classes::types
