#pragma once
#include <Modloader/app/structs/SpiritLeashMode__Enum.h>
#include <Modloader/app/structs/SpiritLeashMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashMode__Enum {
        inline app::SpiritLeashMode__Enum__Class** type_info() {
            static app::SpiritLeashMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLeashMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLeashMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashMode__Enum__Class>(type_info(), "", "SpiritLeashMode");
        }
        inline app::SpiritLeashMode__Enum* create() {
            return il2cpp::create_object<app::SpiritLeashMode__Enum>(get_class());
        }
    } // namespace SpiritLeashMode__Enum
} // namespace app::classes::types
