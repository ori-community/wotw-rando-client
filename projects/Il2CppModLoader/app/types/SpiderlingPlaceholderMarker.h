#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderlingPlaceholderMarker {
        namespace {
            app::SpiderlingPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        app::SpiderlingPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::SpiderlingPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingPlaceholderMarker__Class>(type_info, "", "SpiderlingPlaceholderMarker");
        }
        inline app::SpiderlingPlaceholderMarker* create() {
            return il2cpp::create_object<app::SpiderlingPlaceholderMarker>(get_class());
        }
    } // namespace SpiderlingPlaceholderMarker
} // namespace app::classes::types
