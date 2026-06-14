#pragma once
#include <Modloader/app/structs/UIInteractable.h>
#include <Modloader/app/structs/UIInteractable__Array.h>
#include <Modloader/app/structs/UIInteractable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UIInteractable {
        inline app::UIInteractable__Class** type_info() {
            static app::UIInteractable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UIInteractable__Class**)(modloader::win::memory::resolve_rva(0x04755E20));
            }
            return cache;
        }
        inline app::UIInteractable__Class* get_class() {
            return il2cpp::get_class<app::UIInteractable__Class>(type_info(), "Moon.UI", "UIInteractable");
        }
        inline app::UIInteractable* create() {
            return il2cpp::create_object<app::UIInteractable>(get_class());
        }
        inline app::UIInteractable__Array* create_array(int size) {
            return il2cpp::array_new<app::UIInteractable__Array>(get_class(), size);
        }
        inline app::UIInteractable__Array* create_array(const std::vector<app::UIInteractable*>& items) {
            return il2cpp::array_new<app::UIInteractable__Array>(get_class(), items);
        }
    } // namespace UIInteractable
} // namespace app::classes::types
