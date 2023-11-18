#pragma once
#include <Modloader/app/structs/SetObject.h>
#include <Modloader/app/structs/SetObject__Array.h>
#include <Modloader/app/structs/SetObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetObject {
        inline app::SetObject__Class** type_info() {
            static app::SetObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetObject__Class* get_class() {
            return il2cpp::get_class<app::SetObject__Class>(type_info(), "PlayFab.DataModels", "SetObject");
        }
        inline app::SetObject* create() {
            return il2cpp::create_object<app::SetObject>(get_class());
        }
        inline app::SetObject__Array* create_array(int size) {
            return il2cpp::array_new<app::SetObject__Array>(get_class(), size);
        }
        inline app::SetObject__Array* create_array(const std::vector<app::SetObject*>& items) {
            return il2cpp::array_new<app::SetObject__Array>(get_class(), items);
        }
    } // namespace SetObject
} // namespace app::classes::types
