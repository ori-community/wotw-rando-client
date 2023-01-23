#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeedPlaceholderMarker__Class.h>
#include <Modloader/app/structs/SeedPlaceholderMarker.h>

namespace app::classes::types {
    namespace SeedPlaceholderMarker {
        namespace {
            inline app::SeedPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::SeedPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::SeedPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::SeedPlaceholderMarker__Class>(type_info, "", "SeedPlaceholderMarker");
        }
        inline app::SeedPlaceholderMarker* create() {
            return il2cpp::create_object<app::SeedPlaceholderMarker>(get_class());
        }
    } // namespace SeedPlaceholderMarker
} // namespace app::classes::types
