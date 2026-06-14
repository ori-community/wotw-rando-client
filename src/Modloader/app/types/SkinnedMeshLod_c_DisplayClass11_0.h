#pragma once
#include <Modloader/app/structs/SkinnedMeshLod_c_DisplayClass11_0.h>
#include <Modloader/app/structs/SkinnedMeshLod_c_DisplayClass11_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkinnedMeshLod_c_DisplayClass11_0 {
        inline app::SkinnedMeshLod_c_DisplayClass11_0__Class** type_info() {
            static app::SkinnedMeshLod_c_DisplayClass11_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkinnedMeshLod_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x047256C0));
            }
            return cache;
        }
        inline app::SkinnedMeshLod_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SkinnedMeshLod_c_DisplayClass11_0__Class>(type_info(), "", "SkinnedMeshLod", "<>c__DisplayClass11_0");
        }
        inline app::SkinnedMeshLod_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::SkinnedMeshLod_c_DisplayClass11_0>(get_class());
        }
    } // namespace SkinnedMeshLod_c_DisplayClass11_0
} // namespace app::classes::types
