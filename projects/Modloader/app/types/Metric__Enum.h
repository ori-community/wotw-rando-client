#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Metric__Enum__Class.h>
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/Metric__Enum__Array.h>

namespace app::classes::types {
    namespace Metric__Enum {
        inline app::Metric__Enum__Class** type_info = (app::Metric__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477AD40));
        inline app::Metric__Enum__Class* get_class() {
            return il2cpp::get_class<app::Metric__Enum__Class>(type_info, "Moon.Profile", "Metric");
        }
        inline app::Metric__Enum* create() {
            return il2cpp::create_object<app::Metric__Enum>(get_class());
        }
        inline app::Metric__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Metric__Enum__Array>(get_class(), size);
        }
        inline app::Metric__Enum__Array* create_array(const std::vector<app::Metric__Enum*>& items) {
            return il2cpp::array_new<app::Metric__Enum__Array>(get_class(), items);
        }
    } // namespace Metric__Enum
} // namespace app::classes::types
