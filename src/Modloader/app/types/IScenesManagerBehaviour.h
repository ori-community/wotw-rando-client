#pragma once
#include <Modloader/app/structs/IScenesManagerBehaviour.h>
#include <Modloader/app/structs/IScenesManagerBehaviour__Array.h>
#include <Modloader/app/structs/IScenesManagerBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IScenesManagerBehaviour {
        inline app::IScenesManagerBehaviour__Class** type_info() {
            static app::IScenesManagerBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IScenesManagerBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0475C460));
            }
            return cache;
        }
        inline app::IScenesManagerBehaviour__Class* get_class() {
            return il2cpp::get_class<app::IScenesManagerBehaviour__Class>(type_info(), "", "IScenesManagerBehaviour");
        }
        inline app::IScenesManagerBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::IScenesManagerBehaviour__Array>(get_class(), size);
        }
        inline app::IScenesManagerBehaviour__Array* create_array(const std::vector<app::IScenesManagerBehaviour*>& items) {
            return il2cpp::array_new<app::IScenesManagerBehaviour__Array>(get_class(), items);
        }
    } // namespace IScenesManagerBehaviour
} // namespace app::classes::types
