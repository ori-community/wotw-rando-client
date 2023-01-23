#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DirectorUpdateMode__Enum__Class.h>
#include <Modloader/app/structs/DirectorUpdateMode__Enum.h>

namespace app::classes::types {
    namespace DirectorUpdateMode__Enum {
        namespace {
            inline app::DirectorUpdateMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DirectorUpdateMode__Enum__Class** type_info = &type_info_ref;
        inline app::DirectorUpdateMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::DirectorUpdateMode__Enum__Class>(type_info, "UnityEngine.Playables", "DirectorUpdateMode");
        }
        inline app::DirectorUpdateMode__Enum* create() {
            return il2cpp::create_object<app::DirectorUpdateMode__Enum>(get_class());
        }
    } // namespace DirectorUpdateMode__Enum
} // namespace app::classes::types
