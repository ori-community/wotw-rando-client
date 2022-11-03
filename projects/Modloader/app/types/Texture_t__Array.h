#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Texture_t__Array {
        namespace {
            inline app::Texture_t__Array__Class* type_info_ref = nullptr;
        }
        inline app::Texture_t__Array__Class** type_info = &type_info_ref;
        inline app::Texture_t__Array__Class* get_class() {
            return il2cpp::get_class<app::Texture_t__Array__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "Texture_t[]");
        }
        inline app::Texture_t__Array* create() {
            return il2cpp::create_object<app::Texture_t__Array>(get_class());
        }
    } // namespace Texture_t__Array
} // namespace app::classes::types
