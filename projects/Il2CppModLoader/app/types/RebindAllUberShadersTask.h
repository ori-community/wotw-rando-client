#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RebindAllUberShadersTask {
        inline app::RebindAllUberShadersTask__Class** type_info = (app::RebindAllUberShadersTask__Class**)(modloader::win::memory::resolve_rva(0x04748E90));
        inline app::RebindAllUberShadersTask__Class* get_class() {
            return il2cpp::get_class<app::RebindAllUberShadersTask__Class>(type_info, "Moon.ArtOptimization", "RebindAllUberShadersTask");
        }
        inline app::RebindAllUberShadersTask* create() {
            return il2cpp::create_object<app::RebindAllUberShadersTask>(get_class());
        }
    } // namespace RebindAllUberShadersTask
} // namespace app::classes::types
