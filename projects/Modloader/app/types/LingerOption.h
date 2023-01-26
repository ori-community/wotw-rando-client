#pragma once
#include <Modloader/app/structs/LingerOption.h>
#include <Modloader/app/structs/LingerOption__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LingerOption {
        inline app::LingerOption__Class** type_info() {
            static app::LingerOption__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LingerOption__Class**)(modloader::win::memory::resolve_rva(0x04719198));
            }
            return cache;
        }
        inline app::LingerOption__Class* get_class() {
            return il2cpp::get_class<app::LingerOption__Class>(type_info(), "System.Net.Sockets", "LingerOption");
        }
        inline app::LingerOption* create() {
            return il2cpp::create_object<app::LingerOption>(get_class());
        }
    } // namespace LingerOption
} // namespace app::classes::types
