#pragma once
#include <Modloader/app/structs/AssemblyBridge.h>
#include <Modloader/app/structs/AssemblyBridge__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyBridge {
        inline app::AssemblyBridge__Class** type_info() {
            static app::AssemblyBridge__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AssemblyBridge__Class**)(modloader::win::memory::resolve_rva(0x0478B838));
            }
            return cache;
        }
        inline app::AssemblyBridge__Class* get_class() {
            return il2cpp::get_class<app::AssemblyBridge__Class>(type_info(), "", "AssemblyBridge");
        }
        inline app::AssemblyBridge* create() {
            return il2cpp::create_object<app::AssemblyBridge>(get_class());
        }
    } // namespace AssemblyBridge
} // namespace app::classes::types
