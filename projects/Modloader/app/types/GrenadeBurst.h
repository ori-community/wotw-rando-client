#pragma once
#include <Modloader/app/structs/GrenadeBurst.h>
#include <Modloader/app/structs/GrenadeBurst__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrenadeBurst {
        inline app::GrenadeBurst__Class** type_info() {
            static app::GrenadeBurst__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrenadeBurst__Class**)(modloader::win::memory::resolve_rva(0x04766C78));
            }
            return cache;
        }
        inline app::GrenadeBurst__Class* get_class() {
            return il2cpp::get_class<app::GrenadeBurst__Class>(type_info(), "", "GrenadeBurst");
        }
        inline app::GrenadeBurst* create() {
            return il2cpp::create_object<app::GrenadeBurst>(get_class());
        }
    } // namespace GrenadeBurst
} // namespace app::classes::types
