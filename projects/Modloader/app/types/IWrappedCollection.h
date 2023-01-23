#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IWrappedCollection__Class.h>

namespace app::classes::types {
    namespace IWrappedCollection {
        inline app::IWrappedCollection__Class** type_info = (app::IWrappedCollection__Class**)(modloader::win::memory::resolve_rva(0x04749A68));
        inline app::IWrappedCollection__Class* get_class() {
            return il2cpp::get_class<app::IWrappedCollection__Class>(type_info, "Newtonsoft.Json.Utilities", "IWrappedCollection");
        }
    } // namespace IWrappedCollection
} // namespace app::classes::types
