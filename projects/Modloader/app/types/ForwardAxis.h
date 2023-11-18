#pragma once
#include <Modloader/app/structs/ForwardAxis.h>
#include <Modloader/app/structs/ForwardAxis__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForwardAxis {
        inline app::ForwardAxis__Class** type_info() {
            static app::ForwardAxis__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ForwardAxis__Class**)(modloader::win::memory::resolve_rva(0x04793FC0));
            }
            return cache;
        }
        inline app::ForwardAxis__Class* get_class() {
            return il2cpp::get_class<app::ForwardAxis__Class>(type_info(), "System.Xml.Schema", "ForwardAxis");
        }
        inline app::ForwardAxis* create() {
            return il2cpp::create_object<app::ForwardAxis>(get_class());
        }
    } // namespace ForwardAxis
} // namespace app::classes::types
