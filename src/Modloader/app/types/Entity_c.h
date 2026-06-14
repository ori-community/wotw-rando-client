#pragma once
#include <Modloader/app/structs/Entity_c.h>
#include <Modloader/app/structs/Entity_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Entity_c {
        inline app::Entity_c__Class** type_info() {
            static app::Entity_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Entity_c__Class**)(modloader::win::memory::resolve_rva(0x04789F30));
            }
            return cache;
        }
        inline app::Entity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Entity_c__Class>(type_info(), "Moon", "Entity", "<>c");
        }
        inline app::Entity_c* create() {
            return il2cpp::create_object<app::Entity_c>(get_class());
        }
    } // namespace Entity_c
} // namespace app::classes::types
