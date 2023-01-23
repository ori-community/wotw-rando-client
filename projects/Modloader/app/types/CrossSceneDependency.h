#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrossSceneDependency__Class.h>
#include <Modloader/app/structs/CrossSceneDependency.h>
#include <Modloader/app/structs/CrossSceneDependency__Array.h>

namespace app::classes::types {
    namespace CrossSceneDependency {
        namespace {
            inline app::CrossSceneDependency__Class* type_info_ref = nullptr;
        }
        inline app::CrossSceneDependency__Class** type_info = &type_info_ref;
        inline app::CrossSceneDependency__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneDependency__Class>(type_info, "Moon", "CrossSceneDependency");
        }
        inline app::CrossSceneDependency* create() {
            return il2cpp::create_object<app::CrossSceneDependency>(get_class());
        }
        inline app::CrossSceneDependency__Array* create_array(int size) {
            return il2cpp::array_new<app::CrossSceneDependency__Array>(get_class(), size);
        }
        inline app::CrossSceneDependency__Array* create_array(const std::vector<app::CrossSceneDependency*>& items) {
            return il2cpp::array_new<app::CrossSceneDependency__Array>(get_class(), items);
        }
    } // namespace CrossSceneDependency
} // namespace app::classes::types
