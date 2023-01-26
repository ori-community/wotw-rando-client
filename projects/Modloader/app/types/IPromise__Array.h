#pragma once
#include <Modloader/app/structs/IPromise__Array.h>
#include <Modloader/app/structs/IPromise__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPromise__Array {
        inline app::IPromise__Array__Class** type_info() {
            static app::IPromise__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPromise__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPromise__Array__Class* get_class() {
            return il2cpp::get_class<app::IPromise__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "IPromise[]");
        }
        inline app::IPromise__Array* create() {
            return il2cpp::create_object<app::IPromise__Array>(get_class());
        }
    } // namespace IPromise__Array
} // namespace app::classes::types
