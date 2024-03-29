#pragma once
#include <Modloader/app/structs/BaseInputModule.h>
#include <Modloader/app/structs/BaseInputModule__Array.h>
#include <Modloader/app/structs/BaseInputModule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseInputModule {
        inline app::BaseInputModule__Class** type_info() {
            static app::BaseInputModule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseInputModule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseInputModule__Class* get_class() {
            return il2cpp::get_class<app::BaseInputModule__Class>(type_info(), "UnityEngine.EventSystems", "BaseInputModule");
        }
        inline app::BaseInputModule* create() {
            return il2cpp::create_object<app::BaseInputModule>(get_class());
        }
        inline app::BaseInputModule__Array* create_array(int size) {
            return il2cpp::array_new<app::BaseInputModule__Array>(get_class(), size);
        }
        inline app::BaseInputModule__Array* create_array(const std::vector<app::BaseInputModule*>& items) {
            return il2cpp::array_new<app::BaseInputModule__Array>(get_class(), items);
        }
    } // namespace BaseInputModule
} // namespace app::classes::types
