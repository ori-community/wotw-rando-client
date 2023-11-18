#pragma once
#include <Modloader/app/structs/AssemblyLoadEventHandler.h>
#include <Modloader/app/structs/AssemblyLoadEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyLoadEventHandler {
        inline app::AssemblyLoadEventHandler__Class** type_info() {
            static app::AssemblyLoadEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AssemblyLoadEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04787280));
            }
            return cache;
        }
        inline app::AssemblyLoadEventHandler__Class* get_class() {
            return il2cpp::get_class<app::AssemblyLoadEventHandler__Class>(type_info(), "System", "AssemblyLoadEventHandler");
        }
        inline app::AssemblyLoadEventHandler* create() {
            return il2cpp::create_object<app::AssemblyLoadEventHandler>(get_class());
        }
    } // namespace AssemblyLoadEventHandler
} // namespace app::classes::types
