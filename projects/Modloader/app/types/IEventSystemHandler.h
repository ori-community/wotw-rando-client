#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IEventSystemHandler__Class.h>
#include <Modloader/app/structs/IEventSystemHandler__Array.h>
#include <Modloader/app/structs/IEventSystemHandler.h>

namespace app::classes::types {
    namespace IEventSystemHandler {
        inline app::IEventSystemHandler__Class** type_info = (app::IEventSystemHandler__Class**)(modloader::win::memory::resolve_rva(0x047469E0));
        inline app::IEventSystemHandler__Class* get_class() {
            return il2cpp::get_class<app::IEventSystemHandler__Class>(type_info, "UnityEngine.EventSystems", "IEventSystemHandler");
        }
        inline app::IEventSystemHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IEventSystemHandler__Array>(get_class(), size);
        }
        inline app::IEventSystemHandler__Array* create_array(const std::vector<app::IEventSystemHandler*>& items) {
            return il2cpp::array_new<app::IEventSystemHandler__Array>(get_class(), items);
        }
    } // namespace IEventSystemHandler
} // namespace app::classes::types
