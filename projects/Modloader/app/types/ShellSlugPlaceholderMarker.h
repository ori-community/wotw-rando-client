#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShellSlugPlaceholderMarker {
        namespace {
            inline app::ShellSlugPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::ShellSlugPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::ShellSlugPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::ShellSlugPlaceholderMarker__Class>(type_info, "", "ShellSlugPlaceholderMarker");
        }
        inline app::ShellSlugPlaceholderMarker* create() {
            return il2cpp::create_object<app::ShellSlugPlaceholderMarker>(get_class());
        }
    } // namespace ShellSlugPlaceholderMarker
} // namespace app::classes::types
