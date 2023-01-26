#pragma once
#include <Modloader/app/structs/Keyframe_DirectConverter.h>
#include <Modloader/app/structs/Keyframe_DirectConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Keyframe_DirectConverter {
        inline app::Keyframe_DirectConverter__Class** type_info() {
            static app::Keyframe_DirectConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Keyframe_DirectConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Keyframe_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::Keyframe_DirectConverter__Class>(type_info(), "FullSerializer.Internal.DirectConverters", "Keyframe_DirectConverter");
        }
        inline app::Keyframe_DirectConverter* create() {
            return il2cpp::create_object<app::Keyframe_DirectConverter>(get_class());
        }
    } // namespace Keyframe_DirectConverter
} // namespace app::classes::types
