#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompositeTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompositeTask__Class** type_info;
        inline app::CompositeTask__Class* get_class() {
            return il2cpp::get_class<app::CompositeTask__Class>(type_info, "Moon.ArtOptimization", "CompositeTask");
        }
        inline app::CompositeTask* create() {
            return il2cpp::create_object<app::CompositeTask>(get_class());
        }
    } // namespace CompositeTask
} // namespace app::classes::types
