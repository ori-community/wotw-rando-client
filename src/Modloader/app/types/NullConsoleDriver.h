#pragma once
#include <Modloader/app/structs/NullConsoleDriver.h>
#include <Modloader/app/structs/NullConsoleDriver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NullConsoleDriver {
        inline app::NullConsoleDriver__Class** type_info() {
            static app::NullConsoleDriver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NullConsoleDriver__Class**)(modloader::win::memory::resolve_rva(0x0475CB98));
            }
            return cache;
        }
        inline app::NullConsoleDriver__Class* get_class() {
            return il2cpp::get_class<app::NullConsoleDriver__Class>(type_info(), "System", "NullConsoleDriver");
        }
        inline app::NullConsoleDriver* create() {
            return il2cpp::create_object<app::NullConsoleDriver>(get_class());
        }
    } // namespace NullConsoleDriver
} // namespace app::classes::types
