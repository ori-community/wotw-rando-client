#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IUpdateWhileDisabled__Class.h>

namespace app::classes::types {
    namespace IUpdateWhileDisabled {
        inline app::IUpdateWhileDisabled__Class** type_info = (app::IUpdateWhileDisabled__Class**)(modloader::win::memory::resolve_rva(0x0472C698));
        inline app::IUpdateWhileDisabled__Class* get_class() {
            return il2cpp::get_class<app::IUpdateWhileDisabled__Class>(type_info, "Moon", "IUpdateWhileDisabled");
        }
    } // namespace IUpdateWhileDisabled
} // namespace app::classes::types
