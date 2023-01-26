#pragma once
#include <Modloader/app/structs/OnErrorAttribute.h>
#include <Modloader/app/structs/OnErrorAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnErrorAttribute {
        inline app::OnErrorAttribute__Class** type_info() {
            static app::OnErrorAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnErrorAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnErrorAttribute__Class* get_class() {
            return il2cpp::get_class<app::OnErrorAttribute__Class>(type_info(), "Newtonsoft.Json.Serialization", "OnErrorAttribute");
        }
        inline app::OnErrorAttribute* create() {
            return il2cpp::create_object<app::OnErrorAttribute>(get_class());
        }
    } // namespace OnErrorAttribute
} // namespace app::classes::types
