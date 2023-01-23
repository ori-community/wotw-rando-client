#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HealthBarSpawner__Class.h>
#include <Modloader/app/structs/HealthBarSpawner.h>

namespace app::classes::types {
    namespace HealthBarSpawner {
        namespace {
            inline app::HealthBarSpawner__Class* type_info_ref = nullptr;
        }
        inline app::HealthBarSpawner__Class** type_info = &type_info_ref;
        inline app::HealthBarSpawner__Class* get_class() {
            return il2cpp::get_class<app::HealthBarSpawner__Class>(type_info, "", "HealthBarSpawner");
        }
        inline app::HealthBarSpawner* create() {
            return il2cpp::create_object<app::HealthBarSpawner>(get_class());
        }
    } // namespace HealthBarSpawner
} // namespace app::classes::types
