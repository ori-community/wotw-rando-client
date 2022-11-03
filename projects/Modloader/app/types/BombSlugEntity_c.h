#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BombSlugEntity_c {
        inline app::BombSlugEntity_c__Class** type_info = (app::BombSlugEntity_c__Class**)(modloader::win::memory::resolve_rva(0x04746070));
        inline app::BombSlugEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BombSlugEntity_c__Class>(type_info, "", "BombSlugEntity", "<>c");
        }
        inline app::BombSlugEntity_c* create() {
            return il2cpp::create_object<app::BombSlugEntity_c>(get_class());
        }
    } // namespace BombSlugEntity_c
} // namespace app::classes::types
