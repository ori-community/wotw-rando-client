#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LianaEntity_WaitReleaseTongue_d_83 {
        inline app::LianaEntity_WaitReleaseTongue_d_83__Class** type_info = (app::LianaEntity_WaitReleaseTongue_d_83__Class**)(modloader::win::memory::resolve_rva(0x0476BC30));
        inline app::LianaEntity_WaitReleaseTongue_d_83__Class* get_class() {
            return il2cpp::get_nested_class<app::LianaEntity_WaitReleaseTongue_d_83__Class>(type_info, "", "LianaEntity", "<WaitReleaseTongue>d__83");
        }
        inline app::LianaEntity_WaitReleaseTongue_d_83* create() {
            return il2cpp::create_object<app::LianaEntity_WaitReleaseTongue_d_83>(get_class());
        }
    } // namespace LianaEntity_WaitReleaseTongue_d_83
} // namespace app::classes::types
