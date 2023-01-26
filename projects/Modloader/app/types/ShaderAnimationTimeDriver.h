#pragma once
#include <Modloader/app/structs/ShaderAnimationTimeDriver.h>
#include <Modloader/app/structs/ShaderAnimationTimeDriver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderAnimationTimeDriver {
        inline app::ShaderAnimationTimeDriver__Class** type_info() {
            static app::ShaderAnimationTimeDriver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderAnimationTimeDriver__Class**)(modloader::win::memory::resolve_rva(0x0472AD80));
            }
            return cache;
        }
        inline app::ShaderAnimationTimeDriver__Class* get_class() {
            return il2cpp::get_class<app::ShaderAnimationTimeDriver__Class>(type_info(), "", "ShaderAnimationTimeDriver");
        }
        inline app::ShaderAnimationTimeDriver* create() {
            return il2cpp::create_object<app::ShaderAnimationTimeDriver>(get_class());
        }
    } // namespace ShaderAnimationTimeDriver
} // namespace app::classes::types
