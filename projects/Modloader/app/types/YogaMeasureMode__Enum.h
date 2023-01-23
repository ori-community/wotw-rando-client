#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/YogaMeasureMode__Enum__Class.h>
#include <Modloader/app/structs/YogaMeasureMode__Enum.h>

namespace app::classes::types {
    namespace YogaMeasureMode__Enum {
        inline app::YogaMeasureMode__Enum__Class** type_info = (app::YogaMeasureMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476C8E0));
        inline app::YogaMeasureMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::YogaMeasureMode__Enum__Class>(type_info, "UnityEngine.Yoga", "YogaMeasureMode");
        }
        inline app::YogaMeasureMode__Enum* create() {
            return il2cpp::create_object<app::YogaMeasureMode__Enum>(get_class());
        }
    } // namespace YogaMeasureMode__Enum
} // namespace app::classes::types
