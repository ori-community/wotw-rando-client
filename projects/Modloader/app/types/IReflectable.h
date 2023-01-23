#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IReflectable__Class.h>

namespace app::classes::types {
    namespace IReflectable {
        inline app::IReflectable__Class** type_info = (app::IReflectable__Class**)(modloader::win::memory::resolve_rva(0x04758FC8));
        inline app::IReflectable__Class* get_class() {
            return il2cpp::get_class<app::IReflectable__Class>(type_info, "", "IReflectable");
        }
    } // namespace IReflectable
} // namespace app::classes::types
