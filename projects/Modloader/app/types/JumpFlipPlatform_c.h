#pragma once
#include <Modloader/app/structs/JumpFlipPlatform_c.h>
#include <Modloader/app/structs/JumpFlipPlatform_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpFlipPlatform_c {
        inline app::JumpFlipPlatform_c__Class** type_info() {
            static app::JumpFlipPlatform_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JumpFlipPlatform_c__Class**)(modloader::win::memory::resolve_rva(0x0474DC20));
            }
            return cache;
        }
        inline app::JumpFlipPlatform_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JumpFlipPlatform_c__Class>(type_info(), "", "JumpFlipPlatform", "<>c");
        }
        inline app::JumpFlipPlatform_c* create() {
            return il2cpp::create_object<app::JumpFlipPlatform_c>(get_class());
        }
    } // namespace JumpFlipPlatform_c
} // namespace app::classes::types
