#pragma once
#include <Modloader/app/structs/PureAttribute.h>
#include <Modloader/app/structs/PureAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PureAttribute {
        inline app::PureAttribute__Class** type_info() {
            static app::PureAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PureAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PureAttribute__Class* get_class() {
            return il2cpp::get_class<app::PureAttribute__Class>(type_info(), "JetBrains.Annotations", "PureAttribute");
        }
        inline app::PureAttribute* create() {
            return il2cpp::create_object<app::PureAttribute>(get_class());
        }
    } // namespace PureAttribute
} // namespace app::classes::types
