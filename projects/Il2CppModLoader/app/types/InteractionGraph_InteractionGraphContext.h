#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionGraph_InteractionGraphContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionGraph_InteractionGraphContext__Class** type_info;
        inline app::InteractionGraph_InteractionGraphContext__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionGraph_InteractionGraphContext__Class>(type_info, "Moon.InteractionGraph", "InteractionGraph", "InteractionGraphContext");
        }
        inline app::InteractionGraph_InteractionGraphContext* create() {
            return il2cpp::create_object<app::InteractionGraph_InteractionGraphContext>(get_class());
        }
    } // namespace InteractionGraph_InteractionGraphContext
} // namespace app::classes::types
