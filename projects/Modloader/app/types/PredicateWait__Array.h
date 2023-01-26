#pragma once
#include <Modloader/app/structs/PredicateWait__Array.h>
#include <Modloader/app/structs/PredicateWait__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PredicateWait__Array {
        inline app::PredicateWait__Array__Class** type_info() {
            static app::PredicateWait__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PredicateWait__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PredicateWait__Array__Class* get_class() {
            return il2cpp::get_class<app::PredicateWait__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "PredicateWait[]");
        }
        inline app::PredicateWait__Array* create() {
            return il2cpp::create_object<app::PredicateWait__Array>(get_class());
        }
    } // namespace PredicateWait__Array
} // namespace app::classes::types
