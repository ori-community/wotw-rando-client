#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinPrefabSet__Class.h>
#include <Modloader/app/structs/SeinPrefabSet.h>

namespace app::classes::types {
    namespace SeinPrefabSet {
        namespace {
            inline app::SeinPrefabSet__Class* type_info_ref = nullptr;
        }
        inline app::SeinPrefabSet__Class** type_info = &type_info_ref;
        inline app::SeinPrefabSet__Class* get_class() {
            return il2cpp::get_class<app::SeinPrefabSet__Class>(type_info, "", "SeinPrefabSet");
        }
        inline app::SeinPrefabSet* create() {
            return il2cpp::create_object<app::SeinPrefabSet>(get_class());
        }
    } // namespace SeinPrefabSet
} // namespace app::classes::types
