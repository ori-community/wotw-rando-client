#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IRideable__Class.h>

namespace app::classes::types {
    namespace IRideable {
        inline app::IRideable__Class** type_info = (app::IRideable__Class**)(modloader::win::memory::resolve_rva(0x047874D0));
        inline app::IRideable__Class* get_class() {
            return il2cpp::get_class<app::IRideable__Class>(type_info, "", "IRideable");
        }
    } // namespace IRideable
} // namespace app::classes::types
