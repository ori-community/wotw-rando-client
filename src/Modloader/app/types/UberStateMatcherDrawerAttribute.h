#pragma once
#include <Modloader/app/structs/UberStateMatcherDrawerAttribute.h>
#include <Modloader/app/structs/UberStateMatcherDrawerAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateMatcherDrawerAttribute {
        inline app::UberStateMatcherDrawerAttribute__Class** type_info() {
            static app::UberStateMatcherDrawerAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateMatcherDrawerAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateMatcherDrawerAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberStateMatcherDrawerAttribute__Class>(type_info(), "", "UberStateMatcherDrawerAttribute");
        }
        inline app::UberStateMatcherDrawerAttribute* create() {
            return il2cpp::create_object<app::UberStateMatcherDrawerAttribute>(get_class());
        }
    } // namespace UberStateMatcherDrawerAttribute
} // namespace app::classes::types
