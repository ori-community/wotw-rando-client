#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkinnedMeshLod_c_DisplayClass11_0 {
        inline app::SkinnedMeshLod_c_DisplayClass11_0__Class** type_info = (app::SkinnedMeshLod_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x047256C0));
        inline app::SkinnedMeshLod_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SkinnedMeshLod_c_DisplayClass11_0__Class>(type_info, "", "SkinnedMeshLod", "<>c__DisplayClass11_0");
        }
        inline app::SkinnedMeshLod_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::SkinnedMeshLod_c_DisplayClass11_0>(get_class());
        }
    } // namespace SkinnedMeshLod_c_DisplayClass11_0
} // namespace app::classes::types
