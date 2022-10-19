#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEnumerable_String {
        namespace {
            inline app::IEnumerable_String__Class* type_info_ref = nullptr;
        }
        inline app::IEnumerable_String__Class** type_info = &type_info_ref;
        inline app::IEnumerable_String__Class* get_class() {
            return il2cpp::get_class<app::IEnumerable_String__Class>(type_info, "PlayFab.PlayStreamModels", "IEnumerable_String");
        }
        inline app::IEnumerable_String* create() {
            return il2cpp::create_object<app::IEnumerable_String>(get_class());
        }
    } // namespace IEnumerable_String
} // namespace app::classes::types
