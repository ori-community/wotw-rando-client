#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Cheat__Class.h>
#include <Modloader/app/structs/Cheat.h>
#include <Modloader/app/structs/Cheat__Array.h>

namespace app::classes::types {
    namespace Cheat {
        inline app::Cheat__Class** type_info = (app::Cheat__Class**)(modloader::win::memory::resolve_rva(0x04720F68));
        inline app::Cheat__Class* get_class() {
            return il2cpp::get_class<app::Cheat__Class>(type_info, "", "Cheat");
        }
        inline app::Cheat* create() {
            return il2cpp::create_object<app::Cheat>(get_class());
        }
        inline app::Cheat__Array* create_array(int size) {
            return il2cpp::array_new<app::Cheat__Array>(get_class(), size);
        }
        inline app::Cheat__Array* create_array(const std::vector<app::Cheat*>& items) {
            return il2cpp::array_new<app::Cheat__Array>(get_class(), items);
        }
    } // namespace Cheat
} // namespace app::classes::types
