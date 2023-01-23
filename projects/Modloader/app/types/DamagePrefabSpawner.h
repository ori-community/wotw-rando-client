#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamagePrefabSpawner__Class.h>
#include <Modloader/app/structs/DamagePrefabSpawner.h>

namespace app::classes::types {
    namespace DamagePrefabSpawner {
        namespace {
            inline app::DamagePrefabSpawner__Class* type_info_ref = nullptr;
        }
        inline app::DamagePrefabSpawner__Class** type_info = &type_info_ref;
        inline app::DamagePrefabSpawner__Class* get_class() {
            return il2cpp::get_class<app::DamagePrefabSpawner__Class>(type_info, "", "DamagePrefabSpawner");
        }
        inline app::DamagePrefabSpawner* create() {
            return il2cpp::create_object<app::DamagePrefabSpawner>(get_class());
        }
    } // namespace DamagePrefabSpawner
} // namespace app::classes::types
