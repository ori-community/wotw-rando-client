#pragma once
#include <Modloader/app/structs/SeinDoubleJumpPuppet.h>
#include <Modloader/app/structs/SeinDoubleJumpPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDoubleJumpPuppet {
        inline app::SeinDoubleJumpPuppet__Class** type_info() {
            static app::SeinDoubleJumpPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDoubleJumpPuppet__Class**)(modloader::win::memory::resolve_rva(0x04725640));
            }
            return cache;
        }
        inline app::SeinDoubleJumpPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinDoubleJumpPuppet__Class>(type_info(), "", "SeinDoubleJumpPuppet");
        }
        inline app::SeinDoubleJumpPuppet* create() {
            return il2cpp::create_object<app::SeinDoubleJumpPuppet>(get_class());
        }
    } // namespace SeinDoubleJumpPuppet
} // namespace app::classes::types
