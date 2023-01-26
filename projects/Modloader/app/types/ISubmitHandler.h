#pragma once
#include <Modloader/app/structs/ISubmitHandler.h>
#include <Modloader/app/structs/ISubmitHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISubmitHandler {
        inline app::ISubmitHandler__Class** type_info() {
            static app::ISubmitHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISubmitHandler__Class**)(modloader::win::memory::resolve_rva(0x04773E58));
            }
            return cache;
        }
        inline app::ISubmitHandler__Class* get_class() {
            return il2cpp::get_class<app::ISubmitHandler__Class>(type_info(), "UnityEngine.EventSystems", "ISubmitHandler");
        }
    } // namespace ISubmitHandler
} // namespace app::classes::types
