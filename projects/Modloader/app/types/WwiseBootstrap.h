#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseBootstrap {
        inline app::WwiseBootstrap__Class** type_info = (app::WwiseBootstrap__Class**)(modloader::win::memory::resolve_rva(0x04740020));
        inline app::WwiseBootstrap__Class* get_class() {
            return il2cpp::get_class<app::WwiseBootstrap__Class>(type_info, "Moon.Wwise", "WwiseBootstrap");
        }
        inline app::WwiseBootstrap* create() {
            return il2cpp::create_object<app::WwiseBootstrap>(get_class());
        }
    } // namespace WwiseBootstrap
} // namespace app::classes::types
