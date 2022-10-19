#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISkipCutsceneAction__Array {
        namespace {
            inline app::ISkipCutsceneAction__Array__Class* type_info_ref = nullptr;
        }
        inline app::ISkipCutsceneAction__Array__Class** type_info = &type_info_ref;
        inline app::ISkipCutsceneAction__Array__Class* get_class() {
            return il2cpp::get_class<app::ISkipCutsceneAction__Array__Class>(type_info, "", "ISkipCutsceneAction[]");
        }
        inline app::ISkipCutsceneAction__Array* create() {
            return il2cpp::create_object<app::ISkipCutsceneAction__Array>(get_class());
        }
    } // namespace ISkipCutsceneAction__Array
} // namespace app::classes::types
