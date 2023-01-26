#pragma once
#include <Modloader/app/structs/FieldAccessException.h>
#include <Modloader/app/structs/FieldAccessException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FieldAccessException {
        inline app::FieldAccessException__Class** type_info() {
            static app::FieldAccessException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FieldAccessException__Class**)(modloader::win::memory::resolve_rva(0x0474C6A0));
            }
            return cache;
        }
        inline app::FieldAccessException__Class* get_class() {
            return il2cpp::get_class<app::FieldAccessException__Class>(type_info(), "System", "FieldAccessException");
        }
        inline app::FieldAccessException* create() {
            return il2cpp::create_object<app::FieldAccessException>(get_class());
        }
    } // namespace FieldAccessException
} // namespace app::classes::types
