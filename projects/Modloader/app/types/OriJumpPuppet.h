#pragma once
#include <Modloader/app/structs/OriJumpPuppet.h>
#include <Modloader/app/structs/OriJumpPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriJumpPuppet {
        inline app::OriJumpPuppet__Class** type_info() {
            static app::OriJumpPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OriJumpPuppet__Class**)(modloader::win::memory::resolve_rva(0x0476C610));
            }
            return cache;
        }
        inline app::OriJumpPuppet__Class* get_class() {
            return il2cpp::get_class<app::OriJumpPuppet__Class>(type_info(), "", "OriJumpPuppet");
        }
        inline app::OriJumpPuppet* create() {
            return il2cpp::create_object<app::OriJumpPuppet>(get_class());
        }
    } // namespace OriJumpPuppet
} // namespace app::classes::types
