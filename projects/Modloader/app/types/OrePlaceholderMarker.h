#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OrePlaceholderMarker__Class.h>
#include <Modloader/app/structs/OrePlaceholderMarker.h>

namespace app::classes::types {
    namespace OrePlaceholderMarker {
        namespace {
            inline app::OrePlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::OrePlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::OrePlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::OrePlaceholderMarker__Class>(type_info, "", "OrePlaceholderMarker");
        }
        inline app::OrePlaceholderMarker* create() {
            return il2cpp::create_object<app::OrePlaceholderMarker>(get_class());
        }
    } // namespace OrePlaceholderMarker
} // namespace app::classes::types
