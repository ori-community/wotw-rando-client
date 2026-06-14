#pragma once
#include <Modloader/app/structs/DoubleDebugMenuItem.h>
#include <Modloader/app/structs/DoubleDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoubleDebugMenuItem {
        inline app::DoubleDebugMenuItem__Class** type_info() {
            static app::DoubleDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DoubleDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04764590));
            }
            return cache;
        }
        inline app::DoubleDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::DoubleDebugMenuItem__Class>(type_info(), "", "DoubleDebugMenuItem");
        }
        inline app::DoubleDebugMenuItem* create() {
            return il2cpp::create_object<app::DoubleDebugMenuItem>(get_class());
        }
    } // namespace DoubleDebugMenuItem
} // namespace app::classes::types
