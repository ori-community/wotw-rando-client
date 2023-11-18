#pragma once
#include <Modloader/app/structs/GUIStyleState_DirectConverter.h>
#include <Modloader/app/structs/GUIStyleState_DirectConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIStyleState_DirectConverter {
        inline app::GUIStyleState_DirectConverter__Class** type_info() {
            static app::GUIStyleState_DirectConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUIStyleState_DirectConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUIStyleState_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::GUIStyleState_DirectConverter__Class>(type_info(), "FullSerializer.Internal.DirectConverters", "GUIStyleState_DirectConverter");
        }
        inline app::GUIStyleState_DirectConverter* create() {
            return il2cpp::create_object<app::GUIStyleState_DirectConverter>(get_class());
        }
    } // namespace GUIStyleState_DirectConverter
} // namespace app::classes::types
