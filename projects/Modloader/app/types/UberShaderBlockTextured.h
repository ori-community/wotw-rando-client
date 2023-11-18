#pragma once
#include <Modloader/app/structs/UberShaderBlockTextured.h>
#include <Modloader/app/structs/UberShaderBlockTextured__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderBlockTextured {
        inline app::UberShaderBlockTextured__Class** type_info() {
            static app::UberShaderBlockTextured__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderBlockTextured__Class**)(modloader::win::memory::resolve_rva(0x04719C10));
            }
            return cache;
        }
        inline app::UberShaderBlockTextured__Class* get_class() {
            return il2cpp::get_class<app::UberShaderBlockTextured__Class>(type_info(), "", "UberShaderBlockTextured");
        }
        inline app::UberShaderBlockTextured* create() {
            return il2cpp::create_object<app::UberShaderBlockTextured>(get_class());
        }
    } // namespace UberShaderBlockTextured
} // namespace app::classes::types
