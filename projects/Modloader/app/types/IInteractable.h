#pragma once
#include <Modloader/app/structs/IInteractable.h>
#include <Modloader/app/structs/IInteractable__Array.h>
#include <Modloader/app/structs/IInteractable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInteractable {
        inline app::IInteractable__Class** type_info() {
            static app::IInteractable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IInteractable__Class**)(modloader::win::memory::resolve_rva(0x047886E0));
            }
            return cache;
        }
        inline app::IInteractable__Class* get_class() {
            return il2cpp::get_class<app::IInteractable__Class>(type_info(), "", "IInteractable");
        }
        inline app::IInteractable__Array* create_array(int size) {
            return il2cpp::array_new<app::IInteractable__Array>(get_class(), size);
        }
        inline app::IInteractable__Array* create_array(const std::vector<app::IInteractable*>& items) {
            return il2cpp::array_new<app::IInteractable__Array>(get_class(), items);
        }
    } // namespace IInteractable
} // namespace app::classes::types
