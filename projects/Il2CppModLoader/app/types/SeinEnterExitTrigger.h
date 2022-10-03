#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEnterExitTrigger {
        namespace {
            app::SeinEnterExitTrigger__Class* type_info_ref = nullptr;
        }
        app::SeinEnterExitTrigger__Class** type_info = &type_info_ref;
        inline app::SeinEnterExitTrigger__Class* get_class() {
            return il2cpp::get_class<app::SeinEnterExitTrigger__Class>(type_info, "", "SeinEnterExitTrigger");
        }
        inline app::SeinEnterExitTrigger* create() {
            return il2cpp::create_object<app::SeinEnterExitTrigger>(get_class());
        }
    } // namespace SeinEnterExitTrigger
} // namespace app::classes::types
