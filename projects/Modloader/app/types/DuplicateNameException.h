#pragma once
#include <Modloader/app/structs/DuplicateNameException.h>
#include <Modloader/app/structs/DuplicateNameException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DuplicateNameException {
        inline app::DuplicateNameException__Class** type_info() {
            static app::DuplicateNameException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DuplicateNameException__Class**)(modloader::win::memory::resolve_rva(0x047152F0));
            }
            return cache;
        }
        inline app::DuplicateNameException__Class* get_class() {
            return il2cpp::get_class<app::DuplicateNameException__Class>(type_info(), "System.Data", "DuplicateNameException");
        }
        inline app::DuplicateNameException* create() {
            return il2cpp::create_object<app::DuplicateNameException>(get_class());
        }
    } // namespace DuplicateNameException
} // namespace app::classes::types
