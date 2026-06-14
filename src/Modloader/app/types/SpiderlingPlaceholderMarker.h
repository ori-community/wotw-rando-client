#pragma once
#include <Modloader/app/structs/SpiderlingPlaceholderMarker.h>
#include <Modloader/app/structs/SpiderlingPlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderlingPlaceholderMarker {
        inline app::SpiderlingPlaceholderMarker__Class** type_info() {
            static app::SpiderlingPlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderlingPlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderlingPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingPlaceholderMarker__Class>(type_info(), "", "SpiderlingPlaceholderMarker");
        }
        inline app::SpiderlingPlaceholderMarker* create() {
            return il2cpp::create_object<app::SpiderlingPlaceholderMarker>(get_class());
        }
    } // namespace SpiderlingPlaceholderMarker
} // namespace app::classes::types
