#pragma once
#include <Modloader/app/structs/UberShaderBlockGrabPass.h>
#include <Modloader/app/structs/UberShaderBlockGrabPass__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderBlockGrabPass {
        inline app::UberShaderBlockGrabPass__Class** type_info() {
            static app::UberShaderBlockGrabPass__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderBlockGrabPass__Class**)(modloader::win::memory::resolve_rva(0x047305C8));
            }
            return cache;
        }
        inline app::UberShaderBlockGrabPass__Class* get_class() {
            return il2cpp::get_class<app::UberShaderBlockGrabPass__Class>(type_info(), "", "UberShaderBlockGrabPass");
        }
        inline app::UberShaderBlockGrabPass* create() {
            return il2cpp::create_object<app::UberShaderBlockGrabPass>(get_class());
        }
    } // namespace UberShaderBlockGrabPass
} // namespace app::classes::types
