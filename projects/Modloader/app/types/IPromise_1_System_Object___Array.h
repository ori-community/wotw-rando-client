#pragma once
#include <Modloader/app/structs/IPromise_1_System_Object___Array.h>
#include <Modloader/app/structs/IPromise_1_System_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPromise_1_System_Object___Array {
        inline app::IPromise_1_System_Object___Array__Class** type_info() {
            static app::IPromise_1_System_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPromise_1_System_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPromise_1_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::IPromise_1_System_Object___Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "IPromise`1[System.Object][]");
        }
        inline app::IPromise_1_System_Object___Array* create() {
            return il2cpp::create_object<app::IPromise_1_System_Object___Array>(get_class());
        }
    } // namespace IPromise_1_System_Object___Array
} // namespace app::classes::types
