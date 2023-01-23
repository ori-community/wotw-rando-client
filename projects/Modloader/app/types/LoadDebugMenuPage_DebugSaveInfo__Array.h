#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoadDebugMenuPage_DebugSaveInfo__Array__Class.h>
#include <Modloader/app/structs/LoadDebugMenuPage_DebugSaveInfo__Array.h>

namespace app::classes::types {
    namespace LoadDebugMenuPage_DebugSaveInfo__Array {
        namespace {
            inline app::LoadDebugMenuPage_DebugSaveInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::LoadDebugMenuPage_DebugSaveInfo__Array__Class** type_info = &type_info_ref;
        inline app::LoadDebugMenuPage_DebugSaveInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::LoadDebugMenuPage_DebugSaveInfo__Array__Class>(type_info, "", "LoadDebugMenuPage+DebugSaveInfo[]");
        }
        inline app::LoadDebugMenuPage_DebugSaveInfo__Array* create() {
            return il2cpp::create_object<app::LoadDebugMenuPage_DebugSaveInfo__Array>(get_class());
        }
    } // namespace LoadDebugMenuPage_DebugSaveInfo__Array
} // namespace app::classes::types
