#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Button__Enum__Class.h>
#include <Modloader/app/structs/Button__Enum.h>
#include <Modloader/app/structs/Button__Enum__Array.h>

namespace app::classes::types {
    namespace Button__Enum {
        inline app::Button__Enum__Class** type_info = (app::Button__Enum__Class**)(modloader::win::memory::resolve_rva(0x047143A0));
        inline app::Button__Enum__Class* get_class() {
            return il2cpp::get_class<app::Button__Enum__Class>(type_info, "frameworks.Switch", "Button");
        }
        inline app::Button__Enum* create() {
            return il2cpp::create_object<app::Button__Enum>(get_class());
        }
        inline app::Button__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Button__Enum__Array>(get_class(), size);
        }
        inline app::Button__Enum__Array* create_array(const std::vector<app::Button__Enum*>& items) {
            return il2cpp::array_new<app::Button__Enum__Array>(get_class(), items);
        }
    } // namespace Button__Enum
} // namespace app::classes::types
