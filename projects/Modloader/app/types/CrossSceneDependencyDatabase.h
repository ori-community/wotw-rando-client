#pragma once
#include <Modloader/app/structs/CrossSceneDependencyDatabase.h>
#include <Modloader/app/structs/CrossSceneDependencyDatabase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneDependencyDatabase {
        inline app::CrossSceneDependencyDatabase__Class** type_info() {
            static app::CrossSceneDependencyDatabase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CrossSceneDependencyDatabase__Class**)(modloader::win::memory::resolve_rva(0x04774098));
            }
            return cache;
        }
        inline app::CrossSceneDependencyDatabase__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependencyDatabase__Class>(type_info(), "Moon", "CrossSceneDependencyDatabase");
        }
        inline app::CrossSceneDependencyDatabase* create() {
            return il2cpp::create_object<app::CrossSceneDependencyDatabase>(get_class());
        }
    } // namespace CrossSceneDependencyDatabase
} // namespace app::classes::types
