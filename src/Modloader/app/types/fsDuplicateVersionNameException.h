#pragma once
#include <Modloader/app/structs/fsDuplicateVersionNameException.h>
#include <Modloader/app/structs/fsDuplicateVersionNameException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsDuplicateVersionNameException {
        inline app::fsDuplicateVersionNameException__Class** type_info() {
            static app::fsDuplicateVersionNameException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsDuplicateVersionNameException__Class**)(modloader::win::memory::resolve_rva(0x04748460));
            }
            return cache;
        }
        inline app::fsDuplicateVersionNameException__Class* get_class() {
            return il2cpp::get_class<app::fsDuplicateVersionNameException__Class>(type_info(), "FullSerializer", "fsDuplicateVersionNameException");
        }
        inline app::fsDuplicateVersionNameException* create() {
            return il2cpp::create_object<app::fsDuplicateVersionNameException>(get_class());
        }
    } // namespace fsDuplicateVersionNameException
} // namespace app::classes::types
