#pragma once
#include <Modloader/app/structs/IPromiseInfo__Array.h>
#include <Modloader/app/structs/IPromiseInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPromiseInfo__Array {
        inline app::IPromiseInfo__Array__Class** type_info() {
            static app::IPromiseInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPromiseInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPromiseInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::IPromiseInfo__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "IPromiseInfo[]");
        }
        inline app::IPromiseInfo__Array* create() {
            return il2cpp::create_object<app::IPromiseInfo__Array>(get_class());
        }
    } // namespace IPromiseInfo__Array
} // namespace app::classes::types
