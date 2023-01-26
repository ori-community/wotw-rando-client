#pragma once
#include <Modloader/app/structs/Bounds_DirectConverter.h>
#include <Modloader/app/structs/Bounds_DirectConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Bounds_DirectConverter {
        inline app::Bounds_DirectConverter__Class** type_info() {
            static app::Bounds_DirectConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Bounds_DirectConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Bounds_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::Bounds_DirectConverter__Class>(type_info(), "FullSerializer.Internal.DirectConverters", "Bounds_DirectConverter");
        }
        inline app::Bounds_DirectConverter* create() {
            return il2cpp::create_object<app::Bounds_DirectConverter>(get_class());
        }
    } // namespace Bounds_DirectConverter
} // namespace app::classes::types
