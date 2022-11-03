#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISubmitHandler {
        inline app::ISubmitHandler__Class** type_info = (app::ISubmitHandler__Class**)(modloader::win::memory::resolve_rva(0x04773E58));
        inline app::ISubmitHandler__Class* get_class() {
            return il2cpp::get_class<app::ISubmitHandler__Class>(type_info, "UnityEngine.EventSystems", "ISubmitHandler");
        }
    } // namespace ISubmitHandler
} // namespace app::classes::types
