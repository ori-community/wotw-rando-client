#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberAtlasPrefabAreas__Class.h>
#include <Modloader/app/structs/UberAtlasPrefabAreas.h>

namespace app::classes::types {
    namespace UberAtlasPrefabAreas {
        namespace {
            inline app::UberAtlasPrefabAreas__Class* type_info_ref = nullptr;
        }
        inline app::UberAtlasPrefabAreas__Class** type_info = &type_info_ref;
        inline app::UberAtlasPrefabAreas__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasPrefabAreas__Class>(type_info, "", "UberAtlasPrefabAreas");
        }
        inline app::UberAtlasPrefabAreas* create() {
            return il2cpp::create_object<app::UberAtlasPrefabAreas>(get_class());
        }
    } // namespace UberAtlasPrefabAreas
} // namespace app::classes::types
