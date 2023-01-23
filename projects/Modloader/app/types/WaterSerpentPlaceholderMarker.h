#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterSerpentPlaceholderMarker__Class.h>
#include <Modloader/app/structs/WaterSerpentPlaceholderMarker.h>

namespace app::classes::types {
    namespace WaterSerpentPlaceholderMarker {
        namespace {
            inline app::WaterSerpentPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::WaterSerpentPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::WaterSerpentPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::WaterSerpentPlaceholderMarker__Class>(type_info, "", "WaterSerpentPlaceholderMarker");
        }
        inline app::WaterSerpentPlaceholderMarker* create() {
            return il2cpp::create_object<app::WaterSerpentPlaceholderMarker>(get_class());
        }
    } // namespace WaterSerpentPlaceholderMarker
} // namespace app::classes::types
