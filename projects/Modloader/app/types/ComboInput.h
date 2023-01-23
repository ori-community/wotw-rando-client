#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ComboInput__Class.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/ComboInput__Array.h>

namespace app::classes::types {
    namespace ComboInput {
        inline app::ComboInput__Class** type_info = (app::ComboInput__Class**)(modloader::win::memory::resolve_rva(0x0470BF40));
        inline app::ComboInput__Class* get_class() {
            return il2cpp::get_class<app::ComboInput__Class>(type_info, "Moon.ComboSystem", "ComboInput");
        }
        inline app::ComboInput* create() {
            return il2cpp::create_object<app::ComboInput>(get_class());
        }
        inline app::ComboInput__Array* create_array(int size) {
            return il2cpp::array_new<app::ComboInput__Array>(get_class(), size);
        }
        inline app::ComboInput__Array* create_array(const std::vector<app::ComboInput*>& items) {
            return il2cpp::array_new<app::ComboInput__Array>(get_class(), items);
        }
    } // namespace ComboInput
} // namespace app::classes::types
