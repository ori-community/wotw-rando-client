#pragma once
#include <Modloader/app/structs/ICharacterInteractable.h>
#include <Modloader/app/structs/ICharacterInteractable__Array.h>
#include <Modloader/app/structs/ICharacterInteractable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICharacterInteractable {
        inline app::ICharacterInteractable__Class** type_info() {
            static app::ICharacterInteractable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICharacterInteractable__Class**)(modloader::win::memory::resolve_rva(0x0470F7C0));
            }
            return cache;
        }
        inline app::ICharacterInteractable__Class* get_class() {
            return il2cpp::get_class<app::ICharacterInteractable__Class>(type_info(), "Moon", "ICharacterInteractable");
        }
        inline app::ICharacterInteractable__Array* create_array(int size) {
            return il2cpp::array_new<app::ICharacterInteractable__Array>(get_class(), size);
        }
        inline app::ICharacterInteractable__Array* create_array(const std::vector<app::ICharacterInteractable*>& items) {
            return il2cpp::array_new<app::ICharacterInteractable__Array>(get_class(), items);
        }
    } // namespace ICharacterInteractable
} // namespace app::classes::types
