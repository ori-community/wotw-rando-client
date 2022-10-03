#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreRecordingUberStateEntry__Array {
        namespace {
            app::PreRecordingUberStateEntry__Array__Class* type_info_ref = nullptr;
        }
        app::PreRecordingUberStateEntry__Array__Class** type_info = &type_info_ref;
        inline app::PreRecordingUberStateEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::PreRecordingUberStateEntry__Array__Class>(type_info, "", "PreRecordingUberStateEntry[]");
        }
        inline app::PreRecordingUberStateEntry__Array* create() {
            return il2cpp::create_object<app::PreRecordingUberStateEntry__Array>(get_class());
        }
    } // namespace PreRecordingUberStateEntry__Array
} // namespace app::classes::types
