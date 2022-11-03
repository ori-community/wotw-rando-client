#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThrowStub_3 {
        namespace {
            inline app::ThrowStub_3__Class* type_info_ref = nullptr;
        }
        inline app::ThrowStub_3__Class** type_info = &type_info_ref;
        inline app::ThrowStub_3__Class* get_class() {
            return il2cpp::get_class<app::ThrowStub_3__Class>(type_info, "Unity", "ThrowStub");
        }
        inline app::ThrowStub_3* create() {
            return il2cpp::create_object<app::ThrowStub_3>(get_class());
        }
    } // namespace ThrowStub_3
} // namespace app::classes::types
