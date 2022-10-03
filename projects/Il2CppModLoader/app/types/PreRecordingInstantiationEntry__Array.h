#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreRecordingInstantiationEntry__Array {
        namespace {
            app::PreRecordingInstantiationEntry__Array__Class* type_info_ref = nullptr;
        }
        app::PreRecordingInstantiationEntry__Array__Class** type_info = &type_info_ref;
        inline app::PreRecordingInstantiationEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::PreRecordingInstantiationEntry__Array__Class>(type_info, "", "PreRecordingInstantiationEntry[]");
        }
        inline app::PreRecordingInstantiationEntry__Array* create() {
            return il2cpp::create_object<app::PreRecordingInstantiationEntry__Array>(get_class());
        }
    } // namespace PreRecordingInstantiationEntry__Array
} // namespace app::classes::types
