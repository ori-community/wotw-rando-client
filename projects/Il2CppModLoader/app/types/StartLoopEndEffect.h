#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StartLoopEndEffect {
        namespace {
            inline app::StartLoopEndEffect__Class* type_info_ref = nullptr;
        }
        inline app::StartLoopEndEffect__Class** type_info = &type_info_ref;
        inline app::StartLoopEndEffect__Class* get_class() {
            return il2cpp::get_class<app::StartLoopEndEffect__Class>(type_info, "", "StartLoopEndEffect");
        }
        inline app::StartLoopEndEffect* create() {
            return il2cpp::create_object<app::StartLoopEndEffect>(get_class());
        }
    } // namespace StartLoopEndEffect
} // namespace app::classes::types
