#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IRelatedReflectable__Class.h>

namespace app::classes::types {
    namespace IRelatedReflectable {
        inline app::IRelatedReflectable__Class** type_info = (app::IRelatedReflectable__Class**)(modloader::win::memory::resolve_rva(0x047897A0));
        inline app::IRelatedReflectable__Class* get_class() {
            return il2cpp::get_class<app::IRelatedReflectable__Class>(type_info, "", "IRelatedReflectable");
        }
    } // namespace IRelatedReflectable
} // namespace app::classes::types
