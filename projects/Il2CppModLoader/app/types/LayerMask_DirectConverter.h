#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LayerMask_DirectConverter {
        namespace {
            app::LayerMask_DirectConverter__Class* type_info_ref = nullptr;
        }
        app::LayerMask_DirectConverter__Class** type_info = &type_info_ref;
        inline app::LayerMask_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::LayerMask_DirectConverter__Class>(type_info, "FullSerializer.Internal.DirectConverters", "LayerMask_DirectConverter");
        }
        inline app::LayerMask_DirectConverter* create() {
            return il2cpp::create_object<app::LayerMask_DirectConverter>(get_class());
        }
    } // namespace LayerMask_DirectConverter
} // namespace app::classes::types
