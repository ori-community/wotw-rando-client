#pragma once
#include <Modloader/app/structs/Block2.h>
#include <Modloader/app/structs/Block2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Block2 {
        inline app::Block2__Class** type_info() {
            static app::Block2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Block2__Class**)(modloader::win::memory::resolve_rva(0x047243B0));
            }
            return cache;
        }
        inline app::Block2__Class* get_class() {
            return il2cpp::get_class<app::Block2__Class>(type_info(), "System.Linq.Expressions", "Block2");
        }
        inline app::Block2* create() {
            return il2cpp::create_object<app::Block2>(get_class());
        }
    } // namespace Block2
} // namespace app::classes::types
