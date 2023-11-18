#pragma once
#include <Modloader/app/structs/MonoIO.h>
#include <Modloader/app/structs/MonoIO__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoIO {
        inline app::MonoIO__Class** type_info() {
            static app::MonoIO__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoIO__Class**)(modloader::win::memory::resolve_rva(0x0476F4D8));
            }
            return cache;
        }
        inline app::MonoIO__Class* get_class() {
            return il2cpp::get_class<app::MonoIO__Class>(type_info(), "System.IO", "MonoIO");
        }
        inline app::MonoIO* create() {
            return il2cpp::create_object<app::MonoIO>(get_class());
        }
    } // namespace MonoIO
} // namespace app::classes::types
