#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PrefabReferenceType__Enum__Class.h>
#include <Modloader/app/structs/PrefabReferenceType__Enum.h>

namespace app::classes::types {
    namespace PrefabReferenceType__Enum {
        namespace {
            inline app::PrefabReferenceType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PrefabReferenceType__Enum__Class** type_info = &type_info_ref;
        inline app::PrefabReferenceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::PrefabReferenceType__Enum__Class>(type_info, "Moon.Timeline", "PrefabReferenceType");
        }
        inline app::PrefabReferenceType__Enum* create() {
            return il2cpp::create_object<app::PrefabReferenceType__Enum>(get_class());
        }
    } // namespace PrefabReferenceType__Enum
} // namespace app::classes::types
