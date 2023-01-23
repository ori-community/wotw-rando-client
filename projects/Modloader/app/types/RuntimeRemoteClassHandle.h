#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RuntimeRemoteClassHandle__Class.h>
#include <Modloader/app/structs/RuntimeRemoteClassHandle.h>
#include <Modloader/app/structs/RuntimeRemoteClassHandle__Boxed.h>

namespace app::classes::types {
    namespace RuntimeRemoteClassHandle {
        namespace {
            inline app::RuntimeRemoteClassHandle__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeRemoteClassHandle__Class** type_info = &type_info_ref;
        inline app::RuntimeRemoteClassHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeRemoteClassHandle__Class>(type_info, "Mono", "RuntimeRemoteClassHandle");
        }
        inline app::RuntimeRemoteClassHandle* create() {
            return il2cpp::create_object<app::RuntimeRemoteClassHandle>(get_class());
        }
        inline app::RuntimeRemoteClassHandle__Boxed* box(app::RuntimeRemoteClassHandle value) {
            return il2cpp::box_value<app::RuntimeRemoteClassHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeRemoteClassHandle
} // namespace app::classes::types
