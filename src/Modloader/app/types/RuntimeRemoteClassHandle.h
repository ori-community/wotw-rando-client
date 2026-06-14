#pragma once
#include <Modloader/app/structs/RuntimeRemoteClassHandle.h>
#include <Modloader/app/structs/RuntimeRemoteClassHandle__Boxed.h>
#include <Modloader/app/structs/RuntimeRemoteClassHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeRemoteClassHandle {
        inline app::RuntimeRemoteClassHandle__Class** type_info() {
            static app::RuntimeRemoteClassHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeRemoteClassHandle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeRemoteClassHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeRemoteClassHandle__Class>(type_info(), "Mono", "RuntimeRemoteClassHandle");
        }
        inline app::RuntimeRemoteClassHandle* create() {
            return il2cpp::create_object<app::RuntimeRemoteClassHandle>(get_class());
        }
        inline app::RuntimeRemoteClassHandle__Boxed* box(app::RuntimeRemoteClassHandle value) {
            return il2cpp::box_value<app::RuntimeRemoteClassHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeRemoteClassHandle
} // namespace app::classes::types
