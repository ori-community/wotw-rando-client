#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OriJumpPuppet__Class.h>
#include <Modloader/app/structs/OriJumpPuppet.h>

namespace app::classes::types {
    namespace OriJumpPuppet {
        inline app::OriJumpPuppet__Class** type_info = (app::OriJumpPuppet__Class**)(modloader::win::memory::resolve_rva(0x0476C610));
        inline app::OriJumpPuppet__Class* get_class() {
            return il2cpp::get_class<app::OriJumpPuppet__Class>(type_info, "", "OriJumpPuppet");
        }
        inline app::OriJumpPuppet* create() {
            return il2cpp::create_object<app::OriJumpPuppet>(get_class());
        }
    } // namespace OriJumpPuppet
} // namespace app::classes::types
