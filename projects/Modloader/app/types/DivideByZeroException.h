#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DivideByZeroException__Class.h>
#include <Modloader/app/structs/DivideByZeroException.h>

namespace app::classes::types {
    namespace DivideByZeroException {
        inline app::DivideByZeroException__Class** type_info = (app::DivideByZeroException__Class**)(modloader::win::memory::resolve_rva(0x04752630));
        inline app::DivideByZeroException__Class* get_class() {
            return il2cpp::get_class<app::DivideByZeroException__Class>(type_info, "System", "DivideByZeroException");
        }
        inline app::DivideByZeroException* create() {
            return il2cpp::create_object<app::DivideByZeroException>(get_class());
        }
    } // namespace DivideByZeroException
} // namespace app::classes::types
