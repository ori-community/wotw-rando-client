#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritLeashMode__Enum {
        namespace {
            inline app::SpiritLeashMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SpiritLeashMode__Enum__Class** type_info = &type_info_ref;
        inline app::SpiritLeashMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashMode__Enum__Class>(type_info, "", "SpiritLeashMode");
        }
        inline app::SpiritLeashMode__Enum* create() {
            return il2cpp::create_object<app::SpiritLeashMode__Enum>(get_class());
        }
    } // namespace SpiritLeashMode__Enum
} // namespace app::classes::types
