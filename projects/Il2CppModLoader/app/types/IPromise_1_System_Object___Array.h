#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPromise_1_System_Object___Array {
        namespace {
            app::IPromise_1_System_Object___Array__Class* type_info_ref = nullptr;
        }
        app::IPromise_1_System_Object___Array__Class** type_info = &type_info_ref;
        inline app::IPromise_1_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::IPromise_1_System_Object___Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "IPromise`1[System.Object][]");
        }
        inline app::IPromise_1_System_Object___Array* create() {
            return il2cpp::create_object<app::IPromise_1_System_Object___Array>(get_class());
        }
    } // namespace IPromise_1_System_Object___Array
} // namespace app::classes::types
