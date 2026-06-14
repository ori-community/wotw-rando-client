#pragma once
#include <Modloader/app/structs/MaterialVFXSizePair__Array.h>
#include <Modloader/app/structs/MaterialVFXSizePair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialVFXSizePair__Array {
        inline app::MaterialVFXSizePair__Array__Class** type_info() {
            static app::MaterialVFXSizePair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialVFXSizePair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialVFXSizePair__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialVFXSizePair__Array__Class>(type_info(), "", "MaterialVFXSizePair[]");
        }
        inline app::MaterialVFXSizePair__Array* create() {
            return il2cpp::create_object<app::MaterialVFXSizePair__Array>(get_class());
        }
    } // namespace MaterialVFXSizePair__Array
} // namespace app::classes::types
