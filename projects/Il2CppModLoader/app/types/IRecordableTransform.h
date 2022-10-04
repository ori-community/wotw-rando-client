#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRecordableTransform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRecordableTransform__Class** type_info;
        inline app::IRecordableTransform__Class* get_class() {
            return il2cpp::get_class<app::IRecordableTransform__Class>(type_info, "", "IRecordableTransform");
        }
        inline app::IRecordableTransform* create() {
            return il2cpp::create_object<app::IRecordableTransform>(get_class());
        }
    } // namespace IRecordableTransform
} // namespace app::classes::types
