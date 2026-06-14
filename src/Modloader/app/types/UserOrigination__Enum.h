#pragma once
#include <Modloader/app/structs/UserOrigination__Enum.h>
#include <Modloader/app/structs/UserOrigination__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserOrigination__Enum {
        inline app::UserOrigination__Enum__Class** type_info() {
            static app::UserOrigination__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserOrigination__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477E6B8));
            }
            return cache;
        }
        inline app::UserOrigination__Enum__Class* get_class() {
            return il2cpp::get_class<app::UserOrigination__Enum__Class>(type_info(), "PlayFab.ClientModels", "UserOrigination");
        }
        inline app::UserOrigination__Enum* create() {
            return il2cpp::create_object<app::UserOrigination__Enum>(get_class());
        }
    } // namespace UserOrigination__Enum
} // namespace app::classes::types
