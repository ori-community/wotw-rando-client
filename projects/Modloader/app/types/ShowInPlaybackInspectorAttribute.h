#pragma once
#include <Modloader/app/structs/ShowInPlaybackInspectorAttribute.h>
#include <Modloader/app/structs/ShowInPlaybackInspectorAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowInPlaybackInspectorAttribute {
        inline app::ShowInPlaybackInspectorAttribute__Class** type_info() {
            static app::ShowInPlaybackInspectorAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowInPlaybackInspectorAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowInPlaybackInspectorAttribute__Class* get_class() {
            return il2cpp::get_class<app::ShowInPlaybackInspectorAttribute__Class>(type_info(), "", "ShowInPlaybackInspectorAttribute");
        }
        inline app::ShowInPlaybackInspectorAttribute* create() {
            return il2cpp::create_object<app::ShowInPlaybackInspectorAttribute>(get_class());
        }
    } // namespace ShowInPlaybackInspectorAttribute
} // namespace app::classes::types
