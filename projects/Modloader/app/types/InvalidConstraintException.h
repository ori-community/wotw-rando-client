#pragma once
#include <Modloader/app/structs/InvalidConstraintException.h>
#include <Modloader/app/structs/InvalidConstraintException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvalidConstraintException {
        inline app::InvalidConstraintException__Class** type_info() {
            static app::InvalidConstraintException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvalidConstraintException__Class**)(modloader::win::memory::resolve_rva(0x04793190));
            }
            return cache;
        }
        inline app::InvalidConstraintException__Class* get_class() {
            return il2cpp::get_class<app::InvalidConstraintException__Class>(type_info(), "System.Data", "InvalidConstraintException");
        }
        inline app::InvalidConstraintException* create() {
            return il2cpp::create_object<app::InvalidConstraintException>(get_class());
        }
    } // namespace InvalidConstraintException
} // namespace app::classes::types
