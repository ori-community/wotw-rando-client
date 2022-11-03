#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlendVector4 {
        namespace {
            inline app::BlendVector4__Class* type_info_ref = nullptr;
        }
        inline app::BlendVector4__Class** type_info = &type_info_ref;
        inline app::BlendVector4__Class* get_class() {
            return il2cpp::get_class<app::BlendVector4__Class>(type_info, "", "BlendVector4");
        }
        inline app::BlendVector4* create() {
            return il2cpp::create_object<app::BlendVector4>(get_class());
        }
    } // namespace BlendVector4
} // namespace app::classes::types
