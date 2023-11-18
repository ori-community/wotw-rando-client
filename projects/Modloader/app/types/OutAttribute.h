#pragma once
#include <Modloader/app/structs/OutAttribute.h>
#include <Modloader/app/structs/OutAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OutAttribute {
        inline app::OutAttribute__Class** type_info() {
            static app::OutAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OutAttribute__Class**)(modloader::win::memory::resolve_rva(0x04795CC8));
            }
            return cache;
        }
        inline app::OutAttribute__Class* get_class() {
            return il2cpp::get_class<app::OutAttribute__Class>(type_info(), "System.Runtime.InteropServices", "OutAttribute");
        }
        inline app::OutAttribute* create() {
            return il2cpp::create_object<app::OutAttribute>(get_class());
        }
    } // namespace OutAttribute
} // namespace app::classes::types
