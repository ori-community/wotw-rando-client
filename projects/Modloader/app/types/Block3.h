#pragma once
#include <Modloader/app/structs/Block3.h>
#include <Modloader/app/structs/Block3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Block3 {
        inline app::Block3__Class** type_info() {
            static app::Block3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Block3__Class**)(modloader::win::memory::resolve_rva(0x04773898));
            }
            return cache;
        }
        inline app::Block3__Class* get_class() {
            return il2cpp::get_class<app::Block3__Class>(type_info(), "System.Linq.Expressions", "Block3");
        }
        inline app::Block3* create() {
            return il2cpp::create_object<app::Block3>(get_class());
        }
    } // namespace Block3
} // namespace app::classes::types
