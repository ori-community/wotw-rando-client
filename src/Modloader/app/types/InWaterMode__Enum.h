#pragma once
#include <Modloader/app/structs/InWaterMode__Enum.h>
#include <Modloader/app/structs/InWaterMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InWaterMode__Enum {
        inline app::InWaterMode__Enum__Class** type_info() {
            static app::InWaterMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InWaterMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477D188));
            }
            return cache;
        }
        inline app::InWaterMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::InWaterMode__Enum__Class>(type_info(), "", "InWaterMode");
        }
        inline app::InWaterMode__Enum* create() {
            return il2cpp::create_object<app::InWaterMode__Enum>(get_class());
        }
    } // namespace InWaterMode__Enum
} // namespace app::classes::types
