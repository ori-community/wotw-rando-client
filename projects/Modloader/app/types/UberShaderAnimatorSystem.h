#pragma once
#include <Modloader/app/structs/UberShaderAnimatorSystem.h>
#include <Modloader/app/structs/UberShaderAnimatorSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorSystem {
        inline app::UberShaderAnimatorSystem__Class** type_info() {
            static app::UberShaderAnimatorSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x047212D8));
            }
            return cache;
        }
        inline app::UberShaderAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorSystem__Class>(type_info(), "Moon.Timeline", "UberShaderAnimatorSystem");
        }
        inline app::UberShaderAnimatorSystem* create() {
            return il2cpp::create_object<app::UberShaderAnimatorSystem>(get_class());
        }
    } // namespace UberShaderAnimatorSystem
} // namespace app::classes::types
