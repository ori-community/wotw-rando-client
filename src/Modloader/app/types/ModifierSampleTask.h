#pragma once
#include <Modloader/app/structs/ModifierSampleTask.h>
#include <Modloader/app/structs/ModifierSampleTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModifierSampleTask {
        inline app::ModifierSampleTask__Class** type_info() {
            static app::ModifierSampleTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ModifierSampleTask__Class**)(modloader::win::memory::resolve_rva(0x0471C9C8));
            }
            return cache;
        }
        inline app::ModifierSampleTask__Class* get_class() {
            return il2cpp::get_class<app::ModifierSampleTask__Class>(type_info(), "Moon.ArtOptimization", "ModifierSampleTask");
        }
        inline app::ModifierSampleTask* create() {
            return il2cpp::create_object<app::ModifierSampleTask>(get_class());
        }
    } // namespace ModifierSampleTask
} // namespace app::classes::types
