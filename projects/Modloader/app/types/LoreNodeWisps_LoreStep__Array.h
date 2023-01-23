#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoreNodeWisps_LoreStep__Array__Class.h>
#include <Modloader/app/structs/LoreNodeWisps_LoreStep__Array.h>

namespace app::classes::types {
    namespace LoreNodeWisps_LoreStep__Array {
        namespace {
            inline app::LoreNodeWisps_LoreStep__Array__Class* type_info_ref = nullptr;
        }
        inline app::LoreNodeWisps_LoreStep__Array__Class** type_info = &type_info_ref;
        inline app::LoreNodeWisps_LoreStep__Array__Class* get_class() {
            return il2cpp::get_class<app::LoreNodeWisps_LoreStep__Array__Class>(type_info, "", "LoreNodeWisps+LoreStep[]");
        }
        inline app::LoreNodeWisps_LoreStep__Array* create() {
            return il2cpp::create_object<app::LoreNodeWisps_LoreStep__Array>(get_class());
        }
    } // namespace LoreNodeWisps_LoreStep__Array
} // namespace app::classes::types
