#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PathTooLongException__Class.h>
#include <Modloader/app/structs/PathTooLongException.h>

namespace app::classes::types {
    namespace PathTooLongException {
        inline app::PathTooLongException__Class** type_info = (app::PathTooLongException__Class**)(modloader::win::memory::resolve_rva(0x04764DE8));
        inline app::PathTooLongException__Class* get_class() {
            return il2cpp::get_class<app::PathTooLongException__Class>(type_info, "System.IO", "PathTooLongException");
        }
        inline app::PathTooLongException* create() {
            return il2cpp::create_object<app::PathTooLongException>(get_class());
        }
    } // namespace PathTooLongException
} // namespace app::classes::types
