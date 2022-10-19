#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FransTech {
        namespace {
            inline app::FransTech__Class* type_info_ref = nullptr;
        }
        inline app::FransTech__Class** type_info = &type_info_ref;
        inline app::FransTech__Class* get_class() {
            return il2cpp::get_class<app::FransTech__Class>(type_info, "Moon.Timeline", "FransTech");
        }
        inline app::FransTech* create() {
            return il2cpp::create_object<app::FransTech>(get_class());
        }
    } // namespace FransTech
} // namespace app::classes::types
