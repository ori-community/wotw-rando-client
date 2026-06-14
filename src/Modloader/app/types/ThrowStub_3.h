#pragma once
#include <Modloader/app/structs/ThrowStub_3.h>
#include <Modloader/app/structs/ThrowStub_3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThrowStub_3 {
        inline app::ThrowStub_3__Class** type_info() {
            static app::ThrowStub_3__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ThrowStub_3__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ThrowStub_3__Class* get_class() {
            return il2cpp::get_class<app::ThrowStub_3__Class>(type_info(), "Unity", "ThrowStub");
        }
        inline app::ThrowStub_3* create() {
            return il2cpp::create_object<app::ThrowStub_3>(get_class());
        }
    } // namespace ThrowStub_3
} // namespace app::classes::types
