#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpaceMongerWidget {
        inline app::SpaceMongerWidget__Class** type_info = (app::SpaceMongerWidget__Class**)(modloader::win::memory::resolve_rva(0x047989A0));
        inline app::SpaceMongerWidget__Class* get_class() {
            return il2cpp::get_class<app::SpaceMongerWidget__Class>(type_info, "Moon.UberStateVisualization", "SpaceMongerWidget");
        }
        inline app::SpaceMongerWidget* create() {
            return il2cpp::create_object<app::SpaceMongerWidget>(get_class());
        }
    } // namespace SpaceMongerWidget
} // namespace app::classes::types
