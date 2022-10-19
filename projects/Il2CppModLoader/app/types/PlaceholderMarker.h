#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlaceholderMarker {
        namespace {
            inline app::PlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::PlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::PlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::PlaceholderMarker__Class>(type_info, "", "PlaceholderMarker");
        }
        inline app::PlaceholderMarker* create() {
            return il2cpp::create_object<app::PlaceholderMarker>(get_class());
        }
    } // namespace PlaceholderMarker
} // namespace app::classes::types
