#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneBoundary {
        namespace {
            inline app::SceneBoundary__Class* type_info_ref = nullptr;
        }
        inline app::SceneBoundary__Class** type_info = &type_info_ref;
        inline app::SceneBoundary__Class* get_class() {
            return il2cpp::get_class<app::SceneBoundary__Class>(type_info, "", "SceneBoundary");
        }
        inline app::SceneBoundary* create() {
            return il2cpp::create_object<app::SceneBoundary>(get_class());
        }
    } // namespace SceneBoundary
} // namespace app::classes::types
