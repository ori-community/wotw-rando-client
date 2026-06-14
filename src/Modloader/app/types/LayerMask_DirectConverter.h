#pragma once
#include <Modloader/app/structs/LayerMask_DirectConverter.h>
#include <Modloader/app/structs/LayerMask_DirectConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LayerMask_DirectConverter {
        inline app::LayerMask_DirectConverter__Class** type_info() {
            static app::LayerMask_DirectConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LayerMask_DirectConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LayerMask_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::LayerMask_DirectConverter__Class>(type_info(), "FullSerializer.Internal.DirectConverters", "LayerMask_DirectConverter");
        }
        inline app::LayerMask_DirectConverter* create() {
            return il2cpp::create_object<app::LayerMask_DirectConverter>(get_class());
        }
    } // namespace LayerMask_DirectConverter
} // namespace app::classes::types
