#pragma once
#include <Modloader/app/structs/StaticEntityGenericIdleBehaviour.h>
#include <Modloader/app/structs/StaticEntityGenericIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StaticEntityGenericIdleBehaviour {
        inline app::StaticEntityGenericIdleBehaviour__Class** type_info() {
            static app::StaticEntityGenericIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StaticEntityGenericIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StaticEntityGenericIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StaticEntityGenericIdleBehaviour__Class>(type_info(), "", "StaticEntityGenericIdleBehaviour");
        }
        inline app::StaticEntityGenericIdleBehaviour* create() {
            return il2cpp::create_object<app::StaticEntityGenericIdleBehaviour>(get_class());
        }
    } // namespace StaticEntityGenericIdleBehaviour
} // namespace app::classes::types
