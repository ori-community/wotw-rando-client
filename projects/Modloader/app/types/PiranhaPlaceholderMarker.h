#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PiranhaPlaceholderMarker {
        namespace {
            inline app::PiranhaPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::PiranhaPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::PiranhaPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::PiranhaPlaceholderMarker__Class>(type_info, "", "PiranhaPlaceholderMarker");
        }
        inline app::PiranhaPlaceholderMarker* create() {
            return il2cpp::create_object<app::PiranhaPlaceholderMarker>(get_class());
        }
    } // namespace PiranhaPlaceholderMarker
} // namespace app::classes::types
