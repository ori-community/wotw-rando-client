#pragma once
#include <Modloader/app/structs/InteractionObject.h>
#include <Modloader/app/structs/InteractionObject__Array.h>
#include <Modloader/app/structs/InteractionObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionObject {
        inline app::InteractionObject__Class** type_info() {
            static app::InteractionObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionObject__Class* get_class() {
            return il2cpp::get_class<app::InteractionObject__Class>(type_info(), "RootMotion.FinalIK", "InteractionObject");
        }
        inline app::InteractionObject* create() {
            return il2cpp::create_object<app::InteractionObject>(get_class());
        }
        inline app::InteractionObject__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionObject__Array>(get_class(), size);
        }
        inline app::InteractionObject__Array* create_array(const std::vector<app::InteractionObject*>& items) {
            return il2cpp::array_new<app::InteractionObject__Array>(get_class(), items);
        }
    } // namespace InteractionObject
} // namespace app::classes::types
