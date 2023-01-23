#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AutoFillOnCreationAttribute_ResolveConflict__Enum__Class.h>
#include <Modloader/app/structs/AutoFillOnCreationAttribute_ResolveConflict__Enum.h>

namespace app::classes::types {
    namespace AutoFillOnCreationAttribute_ResolveConflict__Enum {
        namespace {
            inline app::AutoFillOnCreationAttribute_ResolveConflict__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AutoFillOnCreationAttribute_ResolveConflict__Enum__Class** type_info = &type_info_ref;
        inline app::AutoFillOnCreationAttribute_ResolveConflict__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AutoFillOnCreationAttribute_ResolveConflict__Enum__Class>(type_info, "Moon.Timeline", "AutoFillOnCreationAttribute", "ResolveConflict");
        }
        inline app::AutoFillOnCreationAttribute_ResolveConflict__Enum* create() {
            return il2cpp::create_object<app::AutoFillOnCreationAttribute_ResolveConflict__Enum>(get_class());
        }
    } // namespace AutoFillOnCreationAttribute_ResolveConflict__Enum
} // namespace app::classes::types
