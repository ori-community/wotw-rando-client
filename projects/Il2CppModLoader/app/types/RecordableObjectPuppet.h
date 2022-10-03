#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordableObjectPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecordableObjectPuppet__Class** type_info;
        inline app::RecordableObjectPuppet__Class* get_class() {
            return il2cpp::get_class<app::RecordableObjectPuppet__Class>(type_info, "", "RecordableObjectPuppet");
        }
        inline app::RecordableObjectPuppet* create() {
            return il2cpp::create_object<app::RecordableObjectPuppet>(get_class());
        }
        inline app::RecordableObjectPuppet__Array* create_array(int size) {
            return il2cpp::array_new<app::RecordableObjectPuppet__Array>(get_class(), size);
        }
    } // namespace RecordableObjectPuppet
} // namespace app::classes::types
