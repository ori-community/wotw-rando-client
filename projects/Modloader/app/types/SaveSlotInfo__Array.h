#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SaveSlotInfo__Array__Class.h>
#include <Modloader/app/structs/SaveSlotInfo__Array.h>

namespace app::classes::types {
    namespace SaveSlotInfo__Array {
        namespace {
            inline app::SaveSlotInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::SaveSlotInfo__Array__Class** type_info = &type_info_ref;
        inline app::SaveSlotInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotInfo__Array__Class>(type_info, "", "SaveSlotInfo[]");
        }
        inline app::SaveSlotInfo__Array* create() {
            return il2cpp::create_object<app::SaveSlotInfo__Array>(get_class());
        }
    } // namespace SaveSlotInfo__Array
} // namespace app::classes::types
