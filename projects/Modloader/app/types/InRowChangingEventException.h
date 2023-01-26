#pragma once
#include <Modloader/app/structs/InRowChangingEventException.h>
#include <Modloader/app/structs/InRowChangingEventException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InRowChangingEventException {
        inline app::InRowChangingEventException__Class** type_info() {
            static app::InRowChangingEventException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InRowChangingEventException__Class**)(modloader::win::memory::resolve_rva(0x0477E5E8));
            }
            return cache;
        }
        inline app::InRowChangingEventException__Class* get_class() {
            return il2cpp::get_class<app::InRowChangingEventException__Class>(type_info(), "System.Data", "InRowChangingEventException");
        }
        inline app::InRowChangingEventException* create() {
            return il2cpp::create_object<app::InRowChangingEventException>(get_class());
        }
    } // namespace InRowChangingEventException
} // namespace app::classes::types
