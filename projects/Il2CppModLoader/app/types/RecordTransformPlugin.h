#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecordTransformPlugin {
        namespace {
            inline app::RecordTransformPlugin__Class* type_info_ref = nullptr;
        }
        inline app::RecordTransformPlugin__Class** type_info = &type_info_ref;
        inline app::RecordTransformPlugin__Class* get_class() {
            return il2cpp::get_class<app::RecordTransformPlugin__Class>(type_info, "", "RecordTransformPlugin");
        }
        inline app::RecordTransformPlugin* create() {
            return il2cpp::create_object<app::RecordTransformPlugin>(get_class());
        }
    } // namespace RecordTransformPlugin
} // namespace app::classes::types
