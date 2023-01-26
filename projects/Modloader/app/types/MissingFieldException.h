#pragma once
#include <Modloader/app/structs/MissingFieldException.h>
#include <Modloader/app/structs/MissingFieldException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MissingFieldException {
        inline app::MissingFieldException__Class** type_info() {
            static app::MissingFieldException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MissingFieldException__Class**)(modloader::win::memory::resolve_rva(0x0476BEB8));
            }
            return cache;
        }
        inline app::MissingFieldException__Class* get_class() {
            return il2cpp::get_class<app::MissingFieldException__Class>(type_info(), "System", "MissingFieldException");
        }
        inline app::MissingFieldException* create() {
            return il2cpp::create_object<app::MissingFieldException>(get_class());
        }
    } // namespace MissingFieldException
} // namespace app::classes::types
