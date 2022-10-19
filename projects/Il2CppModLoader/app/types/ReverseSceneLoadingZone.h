#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReverseSceneLoadingZone {
        namespace {
            inline app::ReverseSceneLoadingZone__Class* type_info_ref = nullptr;
        }
        inline app::ReverseSceneLoadingZone__Class** type_info = &type_info_ref;
        inline app::ReverseSceneLoadingZone__Class* get_class() {
            return il2cpp::get_class<app::ReverseSceneLoadingZone__Class>(type_info, "", "ReverseSceneLoadingZone");
        }
        inline app::ReverseSceneLoadingZone* create() {
            return il2cpp::create_object<app::ReverseSceneLoadingZone>(get_class());
        }
    } // namespace ReverseSceneLoadingZone
} // namespace app::classes::types
