#pragma once
#include <Modloader/app/structs/ObjectResult.h>
#include <Modloader/app/structs/ObjectResult__Array.h>
#include <Modloader/app/structs/ObjectResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectResult {
        inline app::ObjectResult__Class** type_info() {
            static app::ObjectResult__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectResult__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectResult__Class* get_class() {
            return il2cpp::get_class<app::ObjectResult__Class>(type_info(), "PlayFab.DataModels", "ObjectResult");
        }
        inline app::ObjectResult* create() {
            return il2cpp::create_object<app::ObjectResult>(get_class());
        }
        inline app::ObjectResult__Array* create_array(int size) {
            return il2cpp::array_new<app::ObjectResult__Array>(get_class(), size);
        }
        inline app::ObjectResult__Array* create_array(const std::vector<app::ObjectResult*>& items) {
            return il2cpp::array_new<app::ObjectResult__Array>(get_class(), items);
        }
    } // namespace ObjectResult
} // namespace app::classes::types
