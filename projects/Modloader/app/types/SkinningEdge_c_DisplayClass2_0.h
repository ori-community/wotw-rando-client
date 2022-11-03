#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkinningEdge_c_DisplayClass2_0 {
        inline app::SkinningEdge_c_DisplayClass2_0__Class** type_info = (app::SkinningEdge_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04741BA8));
        inline app::SkinningEdge_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SkinningEdge_c_DisplayClass2_0__Class>(type_info, "", "SkinningEdge", "<>c__DisplayClass2_0");
        }
        inline app::SkinningEdge_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::SkinningEdge_c_DisplayClass2_0>(get_class());
        }
    } // namespace SkinningEdge_c_DisplayClass2_0
} // namespace app::classes::types
