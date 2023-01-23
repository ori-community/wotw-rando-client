#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyDoor__Array__Class.h>
#include <Modloader/app/structs/LegacyDoor__Array.h>

namespace app::classes::types {
    namespace LegacyDoor__Array {
        namespace {
            inline app::LegacyDoor__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyDoor__Array__Class** type_info = &type_info_ref;
        inline app::LegacyDoor__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyDoor__Array__Class>(type_info, "", "LegacyDoor[]");
        }
        inline app::LegacyDoor__Array* create() {
            return il2cpp::create_object<app::LegacyDoor__Array>(get_class());
        }
    } // namespace LegacyDoor__Array
} // namespace app::classes::types
