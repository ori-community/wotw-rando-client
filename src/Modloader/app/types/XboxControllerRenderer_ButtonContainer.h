#pragma once
#include <Modloader/app/structs/XboxControllerRenderer_ButtonContainer.h>
#include <Modloader/app/structs/XboxControllerRenderer_ButtonContainer__Array.h>
#include <Modloader/app/structs/XboxControllerRenderer_ButtonContainer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxControllerRenderer_ButtonContainer {
        inline app::XboxControllerRenderer_ButtonContainer__Class** type_info() {
            static app::XboxControllerRenderer_ButtonContainer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxControllerRenderer_ButtonContainer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxControllerRenderer_ButtonContainer__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxControllerRenderer_ButtonContainer__Class>(type_info(), "", "XboxControllerRenderer", "ButtonContainer");
        }
        inline app::XboxControllerRenderer_ButtonContainer* create() {
            return il2cpp::create_object<app::XboxControllerRenderer_ButtonContainer>(get_class());
        }
        inline app::XboxControllerRenderer_ButtonContainer__Array* create_array(int size) {
            return il2cpp::array_new<app::XboxControllerRenderer_ButtonContainer__Array>(get_class(), size);
        }
        inline app::XboxControllerRenderer_ButtonContainer__Array* create_array(const std::vector<app::XboxControllerRenderer_ButtonContainer*>& items) {
            return il2cpp::array_new<app::XboxControllerRenderer_ButtonContainer__Array>(get_class(), items);
        }
    } // namespace XboxControllerRenderer_ButtonContainer
} // namespace app::classes::types
