#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BloomOptimized__Class.h>
#include <Modloader/app/structs/BloomOptimized.h>

namespace app::classes::types {
    namespace BloomOptimized {
        namespace {
            inline app::BloomOptimized__Class* type_info_ref = nullptr;
        }
        inline app::BloomOptimized__Class** type_info = &type_info_ref;
        inline app::BloomOptimized__Class* get_class() {
            return il2cpp::get_class<app::BloomOptimized__Class>(type_info, "UnityStandardAssets.ImageEffects", "BloomOptimized");
        }
        inline app::BloomOptimized* create() {
            return il2cpp::create_object<app::BloomOptimized>(get_class());
        }
    } // namespace BloomOptimized
} // namespace app::classes::types
