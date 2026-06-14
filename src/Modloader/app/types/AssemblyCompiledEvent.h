#pragma once
#include <Modloader/app/structs/AssemblyCompiledEvent.h>
#include <Modloader/app/structs/AssemblyCompiledEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyCompiledEvent {
        inline app::AssemblyCompiledEvent__Class** type_info() {
            static app::AssemblyCompiledEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyCompiledEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyCompiledEvent__Class* get_class() {
            return il2cpp::get_class<app::AssemblyCompiledEvent__Class>(type_info(), "", "AssemblyCompiledEvent");
        }
        inline app::AssemblyCompiledEvent* create() {
            return il2cpp::create_object<app::AssemblyCompiledEvent>(get_class());
        }
    } // namespace AssemblyCompiledEvent
} // namespace app::classes::types
