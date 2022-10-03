#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossCameraTargetsProvider_CutoffMode__Enum {
        namespace {
            app::KwolokBossCameraTargetsProvider_CutoffMode__Enum__Class* type_info_ref = nullptr;
        }
        app::KwolokBossCameraTargetsProvider_CutoffMode__Enum__Class** type_info = &type_info_ref;
        inline app::KwolokBossCameraTargetsProvider_CutoffMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossCameraTargetsProvider_CutoffMode__Enum__Class>(type_info, "", "KwolokBossCameraTargetsProvider", "CutoffMode");
        }
        inline app::KwolokBossCameraTargetsProvider_CutoffMode__Enum* create() {
            return il2cpp::create_object<app::KwolokBossCameraTargetsProvider_CutoffMode__Enum>(get_class());
        }
    } // namespace KwolokBossCameraTargetsProvider_CutoffMode__Enum
} // namespace app::classes::types
