#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ThrowStub_1__Class.h>
#include <Modloader/app/structs/ThrowStub_1.h>

namespace app::classes::types {
    namespace ThrowStub_1 {
        namespace {
            inline app::ThrowStub_1__Class* type_info_ref = nullptr;
        }
        inline app::ThrowStub_1__Class** type_info = &type_info_ref;
        inline app::ThrowStub_1__Class* get_class() {
            return il2cpp::get_class<app::ThrowStub_1__Class>(type_info, "Unity", "ThrowStub");
        }
        inline app::ThrowStub_1* create() {
            return il2cpp::create_object<app::ThrowStub_1>(get_class());
        }
    } // namespace ThrowStub_1
} // namespace app::classes::types
