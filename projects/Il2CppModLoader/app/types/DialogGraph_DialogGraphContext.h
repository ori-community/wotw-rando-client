#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DialogGraph_DialogGraphContext {
        inline app::DialogGraph_DialogGraphContext__Class** type_info = (app::DialogGraph_DialogGraphContext__Class**)(modloader::win::memory::resolve_rva(0x0470CB70));
        inline app::DialogGraph_DialogGraphContext__Class* get_class() {
            return il2cpp::get_nested_class<app::DialogGraph_DialogGraphContext__Class>(type_info, "", "DialogGraph", "DialogGraphContext");
        }
        inline app::DialogGraph_DialogGraphContext* create() {
            return il2cpp::create_object<app::DialogGraph_DialogGraphContext>(get_class());
        }
    } // namespace DialogGraph_DialogGraphContext
} // namespace app::classes::types
