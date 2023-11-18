#pragma once
#include <Modloader/app/structs/GUIStyle_DirectConverter.h>
#include <Modloader/app/structs/GUIStyle_DirectConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIStyle_DirectConverter {
        inline app::GUIStyle_DirectConverter__Class** type_info() {
            static app::GUIStyle_DirectConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUIStyle_DirectConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUIStyle_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::GUIStyle_DirectConverter__Class>(type_info(), "FullSerializer.Internal.DirectConverters", "GUIStyle_DirectConverter");
        }
        inline app::GUIStyle_DirectConverter* create() {
            return il2cpp::create_object<app::GUIStyle_DirectConverter>(get_class());
        }
    } // namespace GUIStyle_DirectConverter
} // namespace app::classes::types
