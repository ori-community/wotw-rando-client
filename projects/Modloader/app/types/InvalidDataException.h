#pragma once
#include <Modloader/app/structs/InvalidDataException.h>
#include <Modloader/app/structs/InvalidDataException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvalidDataException {
        inline app::InvalidDataException__Class** type_info() {
            static app::InvalidDataException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvalidDataException__Class**)(modloader::win::memory::resolve_rva(0x0470F018));
            }
            return cache;
        }
        inline app::InvalidDataException__Class* get_class() {
            return il2cpp::get_class<app::InvalidDataException__Class>(type_info(), "System.IO", "InvalidDataException");
        }
        inline app::InvalidDataException* create() {
            return il2cpp::create_object<app::InvalidDataException>(get_class());
        }
    } // namespace InvalidDataException
} // namespace app::classes::types
