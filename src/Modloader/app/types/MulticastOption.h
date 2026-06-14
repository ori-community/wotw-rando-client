#pragma once
#include <Modloader/app/structs/MulticastOption.h>
#include <Modloader/app/structs/MulticastOption__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MulticastOption {
        inline app::MulticastOption__Class** type_info() {
            static app::MulticastOption__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MulticastOption__Class**)(modloader::win::memory::resolve_rva(0x0476DB98));
            }
            return cache;
        }
        inline app::MulticastOption__Class* get_class() {
            return il2cpp::get_class<app::MulticastOption__Class>(type_info(), "System.Net.Sockets", "MulticastOption");
        }
        inline app::MulticastOption* create() {
            return il2cpp::create_object<app::MulticastOption>(get_class());
        }
    } // namespace MulticastOption
} // namespace app::classes::types
