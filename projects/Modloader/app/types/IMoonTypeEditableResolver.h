#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMoonTypeEditableResolver__Class.h>

namespace app::classes::types {
    namespace IMoonTypeEditableResolver {
        inline app::IMoonTypeEditableResolver__Class** type_info = (app::IMoonTypeEditableResolver__Class**)(modloader::win::memory::resolve_rva(0x04799448));
        inline app::IMoonTypeEditableResolver__Class* get_class() {
            return il2cpp::get_class<app::IMoonTypeEditableResolver__Class>(type_info, "Moon", "IMoonTypeEditableResolver");
        }
    } // namespace IMoonTypeEditableResolver
} // namespace app::classes::types
