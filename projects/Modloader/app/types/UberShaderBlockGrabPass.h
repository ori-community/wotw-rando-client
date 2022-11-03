#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderBlockGrabPass {
        inline app::UberShaderBlockGrabPass__Class** type_info = (app::UberShaderBlockGrabPass__Class**)(modloader::win::memory::resolve_rva(0x047305C8));
        inline app::UberShaderBlockGrabPass__Class* get_class() {
            return il2cpp::get_class<app::UberShaderBlockGrabPass__Class>(type_info, "", "UberShaderBlockGrabPass");
        }
        inline app::UberShaderBlockGrabPass* create() {
            return il2cpp::create_object<app::UberShaderBlockGrabPass>(get_class());
        }
    } // namespace UberShaderBlockGrabPass
} // namespace app::classes::types
