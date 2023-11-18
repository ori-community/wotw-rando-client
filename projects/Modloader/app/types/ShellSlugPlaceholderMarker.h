#pragma once
#include <Modloader/app/structs/ShellSlugPlaceholderMarker.h>
#include <Modloader/app/structs/ShellSlugPlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShellSlugPlaceholderMarker {
        inline app::ShellSlugPlaceholderMarker__Class** type_info() {
            static app::ShellSlugPlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShellSlugPlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShellSlugPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::ShellSlugPlaceholderMarker__Class>(type_info(), "", "ShellSlugPlaceholderMarker");
        }
        inline app::ShellSlugPlaceholderMarker* create() {
            return il2cpp::create_object<app::ShellSlugPlaceholderMarker>(get_class());
        }
    } // namespace ShellSlugPlaceholderMarker
} // namespace app::classes::types
