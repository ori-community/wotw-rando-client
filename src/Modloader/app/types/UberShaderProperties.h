#pragma once
#include <Modloader/app/structs/UberShaderProperties.h>
#include <Modloader/app/structs/UberShaderProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderProperties {
        inline app::UberShaderProperties__Class** type_info() {
            static app::UberShaderProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderProperties__Class**)(modloader::win::memory::resolve_rva(0x047039E8));
            }
            return cache;
        }
        inline app::UberShaderProperties__Class* get_class() {
            return il2cpp::get_class<app::UberShaderProperties__Class>(type_info(), "", "UberShaderProperties");
        }
        inline app::UberShaderProperties* create() {
            return il2cpp::create_object<app::UberShaderProperties>(get_class());
        }
    } // namespace UberShaderProperties
} // namespace app::classes::types
