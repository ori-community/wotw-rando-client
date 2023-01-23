#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IInteractable__Array__Class.h>
#include <Modloader/app/structs/IInteractable__Array.h>

namespace app::classes::types {
    namespace IInteractable__Array {
        inline app::IInteractable__Array__Class** type_info = (app::IInteractable__Array__Class**)(modloader::win::memory::resolve_rva(0x04780460));
        inline app::IInteractable__Array__Class* get_class() {
            return il2cpp::get_class<app::IInteractable__Array__Class>(type_info, "", "IInteractable[]");
        }
        inline app::IInteractable__Array* create() {
            return il2cpp::create_object<app::IInteractable__Array>(get_class());
        }
    } // namespace IInteractable__Array
} // namespace app::classes::types
