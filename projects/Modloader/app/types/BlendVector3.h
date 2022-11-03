#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlendVector3 {
        namespace {
            inline app::BlendVector3__Class* type_info_ref = nullptr;
        }
        inline app::BlendVector3__Class** type_info = &type_info_ref;
        inline app::BlendVector3__Class* get_class() {
            return il2cpp::get_class<app::BlendVector3__Class>(type_info, "", "BlendVector3");
        }
        inline app::BlendVector3* create() {
            return il2cpp::create_object<app::BlendVector3>(get_class());
        }
    } // namespace BlendVector3
} // namespace app::classes::types
