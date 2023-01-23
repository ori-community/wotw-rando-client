#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PoisonousWaterSerpentPlaceholder__Class.h>
#include <Modloader/app/structs/PoisonousWaterSerpentPlaceholder.h>

namespace app::classes::types {
    namespace PoisonousWaterSerpentPlaceholder {
        namespace {
            inline app::PoisonousWaterSerpentPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::PoisonousWaterSerpentPlaceholder__Class** type_info = &type_info_ref;
        inline app::PoisonousWaterSerpentPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterSerpentPlaceholder__Class>(type_info, "", "PoisonousWaterSerpentPlaceholder");
        }
        inline app::PoisonousWaterSerpentPlaceholder* create() {
            return il2cpp::create_object<app::PoisonousWaterSerpentPlaceholder>(get_class());
        }
    } // namespace PoisonousWaterSerpentPlaceholder
} // namespace app::classes::types
