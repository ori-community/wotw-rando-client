#pragma once
#include <Modloader/app/structs/IContainer.h>
#include <Modloader/app/structs/IContainer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IContainer {
        inline app::IContainer__Class** type_info() {
            static app::IContainer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IContainer__Class**)(modloader::win::memory::resolve_rva(0x04708590));
            }
            return cache;
        }
        inline app::IContainer__Class* get_class() {
            return il2cpp::get_class<app::IContainer__Class>(type_info(), "System.ComponentModel", "IContainer");
        }
    } // namespace IContainer
} // namespace app::classes::types
