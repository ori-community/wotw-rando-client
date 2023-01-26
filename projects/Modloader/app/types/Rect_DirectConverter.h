#pragma once
#include <Modloader/app/structs/Rect_DirectConverter.h>
#include <Modloader/app/structs/Rect_DirectConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Rect_DirectConverter {
        inline app::Rect_DirectConverter__Class** type_info() {
            static app::Rect_DirectConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Rect_DirectConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Rect_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::Rect_DirectConverter__Class>(type_info(), "FullSerializer.Internal.DirectConverters", "Rect_DirectConverter");
        }
        inline app::Rect_DirectConverter* create() {
            return il2cpp::create_object<app::Rect_DirectConverter>(get_class());
        }
    } // namespace Rect_DirectConverter
} // namespace app::classes::types
