#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PauseMenuInventoryElements_UberStateToElement {
        namespace {
            app::PauseMenuInventoryElements_UberStateToElement__Class* type_info_ref = nullptr;
        }
        app::PauseMenuInventoryElements_UberStateToElement__Class** type_info = &type_info_ref;
        inline app::PauseMenuInventoryElements_UberStateToElement__Class* get_class() {
            return il2cpp::get_nested_class<app::PauseMenuInventoryElements_UberStateToElement__Class>(type_info, "", "PauseMenuInventoryElements", "UberStateToElement");
        }
        inline app::PauseMenuInventoryElements_UberStateToElement* create() {
            return il2cpp::create_object<app::PauseMenuInventoryElements_UberStateToElement>(get_class());
        }
        inline app::PauseMenuInventoryElements_UberStateToElement__Boxed* box(app::PauseMenuInventoryElements_UberStateToElement value) {
            return il2cpp::box_value<app::PauseMenuInventoryElements_UberStateToElement__Boxed>(get_class(), value);
        }
        inline app::PauseMenuInventoryElements_UberStateToElement__Array* create_array(int size) {
            return il2cpp::array_new<app::PauseMenuInventoryElements_UberStateToElement__Array>(get_class(), size);
        }
    } // namespace PauseMenuInventoryElements_UberStateToElement
} // namespace app::classes::types
