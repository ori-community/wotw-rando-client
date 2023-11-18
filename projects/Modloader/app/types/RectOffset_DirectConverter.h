#pragma once
#include <Modloader/app/structs/RectOffset_DirectConverter.h>
#include <Modloader/app/structs/RectOffset_DirectConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RectOffset_DirectConverter {
        inline app::RectOffset_DirectConverter__Class** type_info() {
            static app::RectOffset_DirectConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RectOffset_DirectConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RectOffset_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::RectOffset_DirectConverter__Class>(type_info(), "FullSerializer.Internal.DirectConverters", "RectOffset_DirectConverter");
        }
        inline app::RectOffset_DirectConverter* create() {
            return il2cpp::create_object<app::RectOffset_DirectConverter>(get_class());
        }
    } // namespace RectOffset_DirectConverter
} // namespace app::classes::types
