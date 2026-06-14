#pragma once
#include <Modloader/app/structs/Block4.h>
#include <Modloader/app/structs/Block4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Block4 {
        inline app::Block4__Class** type_info() {
            static app::Block4__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Block4__Class**)(modloader::win::memory::resolve_rva(0x04704F30));
            }
            return cache;
        }
        inline app::Block4__Class* get_class() {
            return il2cpp::get_class<app::Block4__Class>(type_info(), "System.Linq.Expressions", "Block4");
        }
        inline app::Block4* create() {
            return il2cpp::create_object<app::Block4>(get_class());
        }
    } // namespace Block4
} // namespace app::classes::types
