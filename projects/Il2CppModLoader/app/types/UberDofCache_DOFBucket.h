#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberDofCache_DOFBucket {
        namespace {
            app::UberDofCache_DOFBucket__Class* type_info_ref = nullptr;
        }
        app::UberDofCache_DOFBucket__Class** type_info = &type_info_ref;
        inline app::UberDofCache_DOFBucket__Class* get_class() {
            return il2cpp::get_nested_class<app::UberDofCache_DOFBucket__Class>(type_info, "", "UberDofCache", "DOFBucket");
        }
        inline app::UberDofCache_DOFBucket* create() {
            return il2cpp::create_object<app::UberDofCache_DOFBucket>(get_class());
        }
    } // namespace UberDofCache_DOFBucket
} // namespace app::classes::types
