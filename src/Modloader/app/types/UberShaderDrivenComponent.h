#pragma once
#include <Modloader/app/structs/UberShaderDrivenComponent.h>
#include <Modloader/app/structs/UberShaderDrivenComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderDrivenComponent {
        inline app::UberShaderDrivenComponent__Class** type_info() {
            static app::UberShaderDrivenComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderDrivenComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderDrivenComponent__Class* get_class() {
            return il2cpp::get_class<app::UberShaderDrivenComponent__Class>(type_info(), "Moon.UI", "UberShaderDrivenComponent");
        }
        inline app::UberShaderDrivenComponent* create() {
            return il2cpp::create_object<app::UberShaderDrivenComponent>(get_class());
        }
    } // namespace UberShaderDrivenComponent
} // namespace app::classes::types
