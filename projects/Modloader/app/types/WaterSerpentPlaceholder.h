#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterSerpentPlaceholder__Class.h>
#include <Modloader/app/structs/WaterSerpentPlaceholder.h>

namespace app::classes::types {
    namespace WaterSerpentPlaceholder {
        namespace {
            inline app::WaterSerpentPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::WaterSerpentPlaceholder__Class** type_info = &type_info_ref;
        inline app::WaterSerpentPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::WaterSerpentPlaceholder__Class>(type_info, "", "WaterSerpentPlaceholder");
        }
        inline app::WaterSerpentPlaceholder* create() {
            return il2cpp::create_object<app::WaterSerpentPlaceholder>(get_class());
        }
    } // namespace WaterSerpentPlaceholder
} // namespace app::classes::types
