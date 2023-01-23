#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormEntity_c__Class.h>
#include <Modloader/app/structs/SandWormEntity_c.h>

namespace app::classes::types {
    namespace SandWormEntity_c {
        inline app::SandWormEntity_c__Class** type_info = (app::SandWormEntity_c__Class**)(modloader::win::memory::resolve_rva(0x04719A08));
        inline app::SandWormEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_c__Class>(type_info, "", "SandWormEntity", "<>c");
        }
        inline app::SandWormEntity_c* create() {
            return il2cpp::create_object<app::SandWormEntity_c>(get_class());
        }
    } // namespace SandWormEntity_c
} // namespace app::classes::types
