#pragma once
#include <Modloader/app/structs/ConstraintException.h>
#include <Modloader/app/structs/ConstraintException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintException {
        inline app::ConstraintException__Class** type_info() {
            static app::ConstraintException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstraintException__Class**)(modloader::win::memory::resolve_rva(0x04775680));
            }
            return cache;
        }
        inline app::ConstraintException__Class* get_class() {
            return il2cpp::get_class<app::ConstraintException__Class>(type_info(), "System.Data", "ConstraintException");
        }
        inline app::ConstraintException* create() {
            return il2cpp::create_object<app::ConstraintException>(get_class());
        }
    } // namespace ConstraintException
} // namespace app::classes::types
