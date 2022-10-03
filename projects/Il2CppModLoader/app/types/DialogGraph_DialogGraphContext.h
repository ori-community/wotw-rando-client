#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DialogGraph_DialogGraphContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DialogGraph_DialogGraphContext__Class** type_info;
        inline app::DialogGraph_DialogGraphContext__Class* get_class() {
            return il2cpp::get_nested_class<app::DialogGraph_DialogGraphContext__Class>(type_info, "", "DialogGraph", "DialogGraphContext");
        }
        inline app::DialogGraph_DialogGraphContext* create() {
            return il2cpp::create_object<app::DialogGraph_DialogGraphContext>(get_class());
        }
    } // namespace DialogGraph_DialogGraphContext
} // namespace app::classes::types
