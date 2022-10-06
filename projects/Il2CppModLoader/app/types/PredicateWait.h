#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PredicateWait {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PredicateWait__Class** type_info;
        inline app::PredicateWait__Class* get_class() {
            return il2cpp::get_class<app::PredicateWait__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PredicateWait");
        }
        inline app::PredicateWait* create() {
            return il2cpp::create_object<app::PredicateWait>(get_class());
        }
        inline app::PredicateWait__Array* create_array(int size) {
            return il2cpp::array_new<app::PredicateWait__Array>(get_class(), size);
        }
        inline app::PredicateWait__Array* create_array(const std::vector<app::PredicateWait*>& items) {
            return il2cpp::array_new<app::PredicateWait__Array>(get_class(), items);
        }
    } // namespace PredicateWait
} // namespace app::classes::types
