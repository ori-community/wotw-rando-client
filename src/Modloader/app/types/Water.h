#pragma once
#include <Modloader/app/structs/Water.h>
#include <Modloader/app/structs/Water__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Water {
        inline app::Water__Class** type_info() {
            static app::Water__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Water__Class**)(modloader::win::memory::resolve_rva(0x04782AF0));
            }
            return cache;
        }
        inline app::Water__Class* get_class() {
            return il2cpp::get_class<app::Water__Class>(type_info(), "", "Water");
        }
        inline app::Water* create() {
            return il2cpp::create_object<app::Water>(get_class());
        }
    } // namespace Water
} // namespace app::classes::types
