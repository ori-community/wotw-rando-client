#pragma once
#include <Modloader/app/structs/ComponentChanges.h>
#include <Modloader/app/structs/ComponentChanges__Array.h>
#include <Modloader/app/structs/ComponentChanges__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComponentChanges {
        inline app::ComponentChanges__Class** type_info() {
            static app::ComponentChanges__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComponentChanges__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComponentChanges__Class* get_class() {
            return il2cpp::get_class<app::ComponentChanges__Class>(type_info(), "Moon.ReviewFramework", "ComponentChanges");
        }
        inline app::ComponentChanges* create() {
            return il2cpp::create_object<app::ComponentChanges>(get_class());
        }
        inline app::ComponentChanges__Array* create_array(int size) {
            return il2cpp::array_new<app::ComponentChanges__Array>(get_class(), size);
        }
        inline app::ComponentChanges__Array* create_array(const std::vector<app::ComponentChanges*>& items) {
            return il2cpp::array_new<app::ComponentChanges__Array>(get_class(), items);
        }
    } // namespace ComponentChanges
} // namespace app::classes::types
