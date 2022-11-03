#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IReflectableType {
        inline app::IReflectableType__Class** type_info = (app::IReflectableType__Class**)(modloader::win::memory::resolve_rva(0x04745F30));
        inline app::IReflectableType__Class* get_class() {
            return il2cpp::get_class<app::IReflectableType__Class>(type_info, "System.Reflection", "IReflectableType");
        }
    } // namespace IReflectableType
} // namespace app::classes::types
