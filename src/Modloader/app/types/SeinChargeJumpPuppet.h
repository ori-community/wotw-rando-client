#pragma once
#include <Modloader/app/structs/SeinChargeJumpPuppet.h>
#include <Modloader/app/structs/SeinChargeJumpPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChargeJumpPuppet {
        inline app::SeinChargeJumpPuppet__Class** type_info() {
            static app::SeinChargeJumpPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinChargeJumpPuppet__Class**)(modloader::win::memory::resolve_rva(0x0475B528));
            }
            return cache;
        }
        inline app::SeinChargeJumpPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeJumpPuppet__Class>(type_info(), "", "SeinChargeJumpPuppet");
        }
        inline app::SeinChargeJumpPuppet* create() {
            return il2cpp::create_object<app::SeinChargeJumpPuppet>(get_class());
        }
    } // namespace SeinChargeJumpPuppet
} // namespace app::classes::types
