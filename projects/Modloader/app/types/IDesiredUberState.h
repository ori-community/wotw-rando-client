#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDesiredUberState__Class.h>
#include <Modloader/app/structs/IDesiredUberState__Array.h>
#include <Modloader/app/structs/IDesiredUberState.h>

namespace app::classes::types {
    namespace IDesiredUberState {
        inline app::IDesiredUberState__Class** type_info = (app::IDesiredUberState__Class**)(modloader::win::memory::resolve_rva(0x0472B058));
        inline app::IDesiredUberState__Class* get_class() {
            return il2cpp::get_class<app::IDesiredUberState__Class>(type_info, "", "IDesiredUberState");
        }
        inline app::IDesiredUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::IDesiredUberState__Array>(get_class(), size);
        }
        inline app::IDesiredUberState__Array* create_array(const std::vector<app::IDesiredUberState*>& items) {
            return il2cpp::array_new<app::IDesiredUberState__Array>(get_class(), items);
        }
    } // namespace IDesiredUberState
} // namespace app::classes::types
