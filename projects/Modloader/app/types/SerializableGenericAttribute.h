#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SerializableGenericAttribute__Class.h>
#include <Modloader/app/structs/SerializableGenericAttribute.h>

namespace app::classes::types {
    namespace SerializableGenericAttribute {
        namespace {
            inline app::SerializableGenericAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SerializableGenericAttribute__Class** type_info = &type_info_ref;
        inline app::SerializableGenericAttribute__Class* get_class() {
            return il2cpp::get_class<app::SerializableGenericAttribute__Class>(type_info, "UnityEngine", "SerializableGenericAttribute");
        }
        inline app::SerializableGenericAttribute* create() {
            return il2cpp::create_object<app::SerializableGenericAttribute>(get_class());
        }
    } // namespace SerializableGenericAttribute
} // namespace app::classes::types
