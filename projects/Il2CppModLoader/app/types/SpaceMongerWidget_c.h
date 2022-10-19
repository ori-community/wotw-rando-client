#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpaceMongerWidget_c {
        inline app::SpaceMongerWidget_c__Class** type_info = (app::SpaceMongerWidget_c__Class**)(modloader::win::memory::resolve_rva(0x0474C9D8));
        inline app::SpaceMongerWidget_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpaceMongerWidget_c__Class>(type_info, "Moon.UberStateVisualization", "SpaceMongerWidget", "<>c");
        }
        inline app::SpaceMongerWidget_c* create() {
            return il2cpp::create_object<app::SpaceMongerWidget_c>(get_class());
        }
    } // namespace SpaceMongerWidget_c
} // namespace app::classes::types
