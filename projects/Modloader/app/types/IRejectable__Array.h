#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRejectable__Array {
        namespace {
            inline app::IRejectable__Array__Class* type_info_ref = nullptr;
        }
        inline app::IRejectable__Array__Class** type_info = &type_info_ref;
        inline app::IRejectable__Array__Class* get_class() {
            return il2cpp::get_class<app::IRejectable__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "IRejectable[]");
        }
        inline app::IRejectable__Array* create() {
            return il2cpp::create_object<app::IRejectable__Array>(get_class());
        }
    } // namespace IRejectable__Array
} // namespace app::classes::types
