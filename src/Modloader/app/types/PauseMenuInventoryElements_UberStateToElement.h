#pragma once
#include <Modloader/app/structs/PauseMenuInventoryElements_UberStateToElement.h>
#include <Modloader/app/structs/PauseMenuInventoryElements_UberStateToElement__Array.h>
#include <Modloader/app/structs/PauseMenuInventoryElements_UberStateToElement__Boxed.h>
#include <Modloader/app/structs/PauseMenuInventoryElements_UberStateToElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PauseMenuInventoryElements_UberStateToElement {
        inline app::PauseMenuInventoryElements_UberStateToElement__Class** type_info() {
            static app::PauseMenuInventoryElements_UberStateToElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PauseMenuInventoryElements_UberStateToElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PauseMenuInventoryElements_UberStateToElement__Class* get_class() {
            return il2cpp::get_nested_class<app::PauseMenuInventoryElements_UberStateToElement__Class>(type_info(), "", "PauseMenuInventoryElements", "UberStateToElement");
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
        inline app::PauseMenuInventoryElements_UberStateToElement__Array* create_array(const std::vector<app::PauseMenuInventoryElements_UberStateToElement>& items) {
            return il2cpp::array_new<app::PauseMenuInventoryElements_UberStateToElement__Array>(get_class(), items);
        }
    } // namespace PauseMenuInventoryElements_UberStateToElement
} // namespace app::classes::types
