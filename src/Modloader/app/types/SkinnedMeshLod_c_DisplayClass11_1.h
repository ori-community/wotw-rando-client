#pragma once
#include <Modloader/app/structs/SkinnedMeshLod_c_DisplayClass11_1.h>
#include <Modloader/app/structs/SkinnedMeshLod_c_DisplayClass11_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkinnedMeshLod_c_DisplayClass11_1 {
        inline app::SkinnedMeshLod_c_DisplayClass11_1__Class** type_info() {
            static app::SkinnedMeshLod_c_DisplayClass11_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkinnedMeshLod_c_DisplayClass11_1__Class**)(modloader::win::memory::resolve_rva(0x04725008));
            }
            return cache;
        }
        inline app::SkinnedMeshLod_c_DisplayClass11_1__Class* get_class() {
            return il2cpp::get_nested_class<app::SkinnedMeshLod_c_DisplayClass11_1__Class>(type_info(), "", "SkinnedMeshLod", "<>c__DisplayClass11_1");
        }
        inline app::SkinnedMeshLod_c_DisplayClass11_1* create() {
            return il2cpp::create_object<app::SkinnedMeshLod_c_DisplayClass11_1>(get_class());
        }
    } // namespace SkinnedMeshLod_c_DisplayClass11_1
} // namespace app::classes::types
