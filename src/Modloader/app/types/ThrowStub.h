#pragma once
#include <Modloader/app/structs/ThrowStub.h>
#include <Modloader/app/structs/ThrowStub__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThrowStub {
        inline app::ThrowStub__Class** type_info() {
            static app::ThrowStub__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ThrowStub__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ThrowStub__Class* get_class() {
            return il2cpp::get_class<app::ThrowStub__Class>(type_info(), "Unity", "ThrowStub");
        }
        inline app::ThrowStub* create() {
            return il2cpp::create_object<app::ThrowStub>(get_class());
        }
    } // namespace ThrowStub
} // namespace app::classes::types
