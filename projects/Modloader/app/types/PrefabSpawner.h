#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PrefabSpawner__Class.h>
#include <Modloader/app/structs/PrefabSpawner.h>

namespace app::classes::types {
    namespace PrefabSpawner {
        namespace {
            inline app::PrefabSpawner__Class* type_info_ref = nullptr;
        }
        inline app::PrefabSpawner__Class** type_info = &type_info_ref;
        inline app::PrefabSpawner__Class* get_class() {
            return il2cpp::get_class<app::PrefabSpawner__Class>(type_info, "", "PrefabSpawner");
        }
        inline app::PrefabSpawner* create() {
            return il2cpp::create_object<app::PrefabSpawner>(get_class());
        }
    } // namespace PrefabSpawner
} // namespace app::classes::types
