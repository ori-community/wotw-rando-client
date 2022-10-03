#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderBlockGrabPass {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderBlockGrabPass__Class** type_info;
        inline app::UberShaderBlockGrabPass__Class* get_class() {
            return il2cpp::get_class<app::UberShaderBlockGrabPass__Class>(type_info, "", "UberShaderBlockGrabPass");
        }
        inline app::UberShaderBlockGrabPass* create() {
            return il2cpp::create_object<app::UberShaderBlockGrabPass>(get_class());
        }
    } // namespace UberShaderBlockGrabPass
} // namespace app::classes::types
