#pragma once
#include <Modloader/app/structs/IEnumerable_String.h>
#include <Modloader/app/structs/IEnumerable_String__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEnumerable_String {
        inline app::IEnumerable_String__Class** type_info() {
            static app::IEnumerable_String__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IEnumerable_String__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IEnumerable_String__Class* get_class() {
            return il2cpp::get_class<app::IEnumerable_String__Class>(type_info(), "PlayFab.PlayStreamModels", "IEnumerable_String");
        }
        inline app::IEnumerable_String* create() {
            return il2cpp::create_object<app::IEnumerable_String>(get_class());
        }
    } // namespace IEnumerable_String
} // namespace app::classes::types
