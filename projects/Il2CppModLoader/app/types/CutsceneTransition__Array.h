#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CutsceneTransition__Array {
        namespace {
            inline app::CutsceneTransition__Array__Class* type_info_ref = nullptr;
        }
        inline app::CutsceneTransition__Array__Class** type_info = &type_info_ref;
        inline app::CutsceneTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::CutsceneTransition__Array__Class>(type_info, "", "CutsceneTransition[]");
        }
        inline app::CutsceneTransition__Array* create() {
            return il2cpp::create_object<app::CutsceneTransition__Array>(get_class());
        }
    } // namespace CutsceneTransition__Array
} // namespace app::classes::types
