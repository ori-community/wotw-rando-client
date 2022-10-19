#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoccerDemo {
        namespace {
            inline app::SoccerDemo__Class* type_info_ref = nullptr;
        }
        inline app::SoccerDemo__Class** type_info = &type_info_ref;
        inline app::SoccerDemo__Class* get_class() {
            return il2cpp::get_class<app::SoccerDemo__Class>(type_info, "RootMotion.Demos", "SoccerDemo");
        }
        inline app::SoccerDemo* create() {
            return il2cpp::create_object<app::SoccerDemo>(get_class());
        }
    } // namespace SoccerDemo
} // namespace app::classes::types
