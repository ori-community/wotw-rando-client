#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISenseInteractable__Class.h>
#include <Modloader/app/structs/ISenseInteractable__Array.h>
#include <Modloader/app/structs/ISenseInteractable.h>

namespace app::classes::types {
    namespace ISenseInteractable {
        inline app::ISenseInteractable__Class** type_info = (app::ISenseInteractable__Class**)(modloader::win::memory::resolve_rva(0x0475DD10));
        inline app::ISenseInteractable__Class* get_class() {
            return il2cpp::get_class<app::ISenseInteractable__Class>(type_info, "", "ISenseInteractable");
        }
        inline app::ISenseInteractable__Array* create_array(int size) {
            return il2cpp::array_new<app::ISenseInteractable__Array>(get_class(), size);
        }
        inline app::ISenseInteractable__Array* create_array(const std::vector<app::ISenseInteractable*>& items) {
            return il2cpp::array_new<app::ISenseInteractable__Array>(get_class(), items);
        }
    } // namespace ISenseInteractable
} // namespace app::classes::types
