#pragma once
#include <Modloader/app/structs/ParamArrayAttribute.h>
#include <Modloader/app/structs/ParamArrayAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParamArrayAttribute {
        inline app::ParamArrayAttribute__Class** type_info() {
            static app::ParamArrayAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParamArrayAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParamArrayAttribute__Class* get_class() {
            return il2cpp::get_class<app::ParamArrayAttribute__Class>(type_info(), "System", "ParamArrayAttribute");
        }
        inline app::ParamArrayAttribute* create() {
            return il2cpp::create_object<app::ParamArrayAttribute>(get_class());
        }
    } // namespace ParamArrayAttribute
} // namespace app::classes::types
