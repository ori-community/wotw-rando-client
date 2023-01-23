#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InvalidConstraintException__Class.h>
#include <Modloader/app/structs/InvalidConstraintException.h>

namespace app::classes::types {
    namespace InvalidConstraintException {
        inline app::InvalidConstraintException__Class** type_info = (app::InvalidConstraintException__Class**)(modloader::win::memory::resolve_rva(0x04793190));
        inline app::InvalidConstraintException__Class* get_class() {
            return il2cpp::get_class<app::InvalidConstraintException__Class>(type_info, "System.Data", "InvalidConstraintException");
        }
        inline app::InvalidConstraintException* create() {
            return il2cpp::create_object<app::InvalidConstraintException>(get_class());
        }
    } // namespace InvalidConstraintException
} // namespace app::classes::types
