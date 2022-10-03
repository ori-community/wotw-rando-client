#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoNestPlaceholderMarker {
        namespace {
            app::SkeetoNestPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        app::SkeetoNestPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::SkeetoNestPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::SkeetoNestPlaceholderMarker__Class>(type_info, "", "SkeetoNestPlaceholderMarker");
        }
        inline app::SkeetoNestPlaceholderMarker* create() {
            return il2cpp::create_object<app::SkeetoNestPlaceholderMarker>(get_class());
        }
    } // namespace SkeetoNestPlaceholderMarker
} // namespace app::classes::types
