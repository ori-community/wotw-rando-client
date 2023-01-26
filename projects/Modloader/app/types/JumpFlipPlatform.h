#pragma once
#include <Modloader/app/structs/JumpFlipPlatform.h>
#include <Modloader/app/structs/JumpFlipPlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpFlipPlatform {
        inline app::JumpFlipPlatform__Class** type_info() {
            static app::JumpFlipPlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JumpFlipPlatform__Class**)(modloader::win::memory::resolve_rva(0x04731048));
            }
            return cache;
        }
        inline app::JumpFlipPlatform__Class* get_class() {
            return il2cpp::get_class<app::JumpFlipPlatform__Class>(type_info(), "", "JumpFlipPlatform");
        }
        inline app::JumpFlipPlatform* create() {
            return il2cpp::create_object<app::JumpFlipPlatform>(get_class());
        }
    } // namespace JumpFlipPlatform
} // namespace app::classes::types
