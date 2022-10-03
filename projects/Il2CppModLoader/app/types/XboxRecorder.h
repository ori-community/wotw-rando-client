#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxRecorder {
        namespace {
            app::XboxRecorder__Class* type_info_ref = nullptr;
        }
        app::XboxRecorder__Class** type_info = &type_info_ref;
        inline app::XboxRecorder__Class* get_class() {
            return il2cpp::get_class<app::XboxRecorder__Class>(type_info, "", "XboxRecorder");
        }
        inline app::XboxRecorder* create() {
            return il2cpp::create_object<app::XboxRecorder>(get_class());
        }
    } // namespace XboxRecorder
} // namespace app::classes::types
