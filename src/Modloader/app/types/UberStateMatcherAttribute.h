#pragma once
#include <Modloader/app/structs/UberStateMatcherAttribute.h>
#include <Modloader/app/structs/UberStateMatcherAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateMatcherAttribute {
        inline app::UberStateMatcherAttribute__Class** type_info() {
            static app::UberStateMatcherAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateMatcherAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateMatcherAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberStateMatcherAttribute__Class>(type_info(), "", "UberStateMatcherAttribute");
        }
        inline app::UberStateMatcherAttribute* create() {
            return il2cpp::create_object<app::UberStateMatcherAttribute>(get_class());
        }
    } // namespace UberStateMatcherAttribute
} // namespace app::classes::types
