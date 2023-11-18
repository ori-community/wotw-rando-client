#pragma once
#include <Modloader/app/structs/DirectorUpdateMode__Enum.h>
#include <Modloader/app/structs/DirectorUpdateMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectorUpdateMode__Enum {
        inline app::DirectorUpdateMode__Enum__Class** type_info() {
            static app::DirectorUpdateMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DirectorUpdateMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DirectorUpdateMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::DirectorUpdateMode__Enum__Class>(type_info(), "UnityEngine.Playables", "DirectorUpdateMode");
        }
        inline app::DirectorUpdateMode__Enum* create() {
            return il2cpp::create_object<app::DirectorUpdateMode__Enum>(get_class());
        }
    } // namespace DirectorUpdateMode__Enum
} // namespace app::classes::types
