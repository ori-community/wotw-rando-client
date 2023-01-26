#pragma once
#include <Modloader/app/structs/DivideByZeroException.h>
#include <Modloader/app/structs/DivideByZeroException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DivideByZeroException {
        inline app::DivideByZeroException__Class** type_info() {
            static app::DivideByZeroException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DivideByZeroException__Class**)(modloader::win::memory::resolve_rva(0x04752630));
            }
            return cache;
        }
        inline app::DivideByZeroException__Class* get_class() {
            return il2cpp::get_class<app::DivideByZeroException__Class>(type_info(), "System", "DivideByZeroException");
        }
        inline app::DivideByZeroException* create() {
            return il2cpp::create_object<app::DivideByZeroException>(get_class());
        }
    } // namespace DivideByZeroException
} // namespace app::classes::types
