#pragma once
#include <Modloader/app/structs/InvalidProgramException.h>
#include <Modloader/app/structs/InvalidProgramException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvalidProgramException {
        inline app::InvalidProgramException__Class** type_info() {
            static app::InvalidProgramException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvalidProgramException__Class**)(modloader::win::memory::resolve_rva(0x04787088));
            }
            return cache;
        }
        inline app::InvalidProgramException__Class* get_class() {
            return il2cpp::get_class<app::InvalidProgramException__Class>(type_info(), "System", "InvalidProgramException");
        }
        inline app::InvalidProgramException* create() {
            return il2cpp::create_object<app::InvalidProgramException>(get_class());
        }
    } // namespace InvalidProgramException
} // namespace app::classes::types
