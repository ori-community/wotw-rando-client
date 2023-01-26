#pragma once
#include <Modloader/app/structs/DrawAsButtonAttribute.h>
#include <Modloader/app/structs/DrawAsButtonAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrawAsButtonAttribute {
        inline app::DrawAsButtonAttribute__Class** type_info() {
            static app::DrawAsButtonAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrawAsButtonAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrawAsButtonAttribute__Class* get_class() {
            return il2cpp::get_class<app::DrawAsButtonAttribute__Class>(type_info(), "", "DrawAsButtonAttribute");
        }
        inline app::DrawAsButtonAttribute* create() {
            return il2cpp::create_object<app::DrawAsButtonAttribute>(get_class());
        }
    } // namespace DrawAsButtonAttribute
} // namespace app::classes::types
