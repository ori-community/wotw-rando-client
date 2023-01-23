#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ComboMove__Class.h>
#include <Modloader/app/structs/ComboMove.h>
#include <Modloader/app/structs/ComboMove__Array.h>

namespace app::classes::types {
    namespace ComboMove {
        inline app::ComboMove__Class** type_info = (app::ComboMove__Class**)(modloader::win::memory::resolve_rva(0x04757CE0));
        inline app::ComboMove__Class* get_class() {
            return il2cpp::get_class<app::ComboMove__Class>(type_info, "Moon.ComboSystem", "ComboMove");
        }
        inline app::ComboMove* create() {
            return il2cpp::create_object<app::ComboMove>(get_class());
        }
        inline app::ComboMove__Array* create_array(int size) {
            return il2cpp::array_new<app::ComboMove__Array>(get_class(), size);
        }
        inline app::ComboMove__Array* create_array(const std::vector<app::ComboMove*>& items) {
            return il2cpp::array_new<app::ComboMove__Array>(get_class(), items);
        }
    } // namespace ComboMove
} // namespace app::classes::types
