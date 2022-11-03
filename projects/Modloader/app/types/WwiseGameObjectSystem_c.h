#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseGameObjectSystem_c {
        inline app::WwiseGameObjectSystem_c__Class** type_info = (app::WwiseGameObjectSystem_c__Class**)(modloader::win::memory::resolve_rva(0x0477D988));
        inline app::WwiseGameObjectSystem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseGameObjectSystem_c__Class>(type_info, "Moon.Wwise", "WwiseGameObjectSystem", "<>c");
        }
        inline app::WwiseGameObjectSystem_c* create() {
            return il2cpp::create_object<app::WwiseGameObjectSystem_c>(get_class());
        }
    } // namespace WwiseGameObjectSystem_c
} // namespace app::classes::types
