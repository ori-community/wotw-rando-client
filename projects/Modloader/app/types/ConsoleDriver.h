#pragma once
#include <Modloader/app/structs/ConsoleDriver.h>
#include <Modloader/app/structs/ConsoleDriver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsoleDriver {
        inline app::ConsoleDriver__Class** type_info() {
            static app::ConsoleDriver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConsoleDriver__Class**)(modloader::win::memory::resolve_rva(0x04756000));
            }
            return cache;
        }
        inline app::ConsoleDriver__Class* get_class() {
            return il2cpp::get_class<app::ConsoleDriver__Class>(type_info(), "System", "ConsoleDriver");
        }
        inline app::ConsoleDriver* create() {
            return il2cpp::create_object<app::ConsoleDriver>(get_class());
        }
    } // namespace ConsoleDriver
} // namespace app::classes::types
