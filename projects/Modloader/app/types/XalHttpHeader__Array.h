#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalHttpHeader__Array {
        namespace {
            inline app::XalHttpHeader__Array__Class* type_info_ref = nullptr;
        }
        inline app::XalHttpHeader__Array__Class** type_info = &type_info_ref;
        inline app::XalHttpHeader__Array__Class* get_class() {
            return il2cpp::get_class<app::XalHttpHeader__Array__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalHttpHeader[]");
        }
        inline app::XalHttpHeader__Array* create() {
            return il2cpp::create_object<app::XalHttpHeader__Array>(get_class());
        }
    } // namespace XalHttpHeader__Array
} // namespace app::classes::types
