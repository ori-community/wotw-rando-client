#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowInPlaybackInspectorAttribute {
        namespace {
            inline app::ShowInPlaybackInspectorAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ShowInPlaybackInspectorAttribute__Class** type_info = &type_info_ref;
        inline app::ShowInPlaybackInspectorAttribute__Class* get_class() {
            return il2cpp::get_class<app::ShowInPlaybackInspectorAttribute__Class>(type_info, "", "ShowInPlaybackInspectorAttribute");
        }
        inline app::ShowInPlaybackInspectorAttribute* create() {
            return il2cpp::create_object<app::ShowInPlaybackInspectorAttribute>(get_class());
        }
    } // namespace ShowInPlaybackInspectorAttribute
} // namespace app::classes::types
