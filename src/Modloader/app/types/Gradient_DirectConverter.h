#pragma once
#include <Modloader/app/structs/Gradient_DirectConverter.h>
#include <Modloader/app/structs/Gradient_DirectConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Gradient_DirectConverter {
        inline app::Gradient_DirectConverter__Class** type_info() {
            static app::Gradient_DirectConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Gradient_DirectConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Gradient_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::Gradient_DirectConverter__Class>(type_info(), "FullSerializer.Internal.DirectConverters", "Gradient_DirectConverter");
        }
        inline app::Gradient_DirectConverter* create() {
            return il2cpp::create_object<app::Gradient_DirectConverter>(get_class());
        }
    } // namespace Gradient_DirectConverter
} // namespace app::classes::types
