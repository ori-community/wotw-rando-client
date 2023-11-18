#pragma once
#include <Modloader/app/structs/ISeinReceiver.h>
#include <Modloader/app/structs/ISeinReceiver__Array.h>
#include <Modloader/app/structs/ISeinReceiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISeinReceiver {
        inline app::ISeinReceiver__Class** type_info() {
            static app::ISeinReceiver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISeinReceiver__Class**)(modloader::win::memory::resolve_rva(0x04725F48));
            }
            return cache;
        }
        inline app::ISeinReceiver__Class* get_class() {
            return il2cpp::get_class<app::ISeinReceiver__Class>(type_info(), "", "ISeinReceiver");
        }
        inline app::ISeinReceiver__Array* create_array(int size) {
            return il2cpp::array_new<app::ISeinReceiver__Array>(get_class(), size);
        }
        inline app::ISeinReceiver__Array* create_array(const std::vector<app::ISeinReceiver*>& items) {
            return il2cpp::array_new<app::ISeinReceiver__Array>(get_class(), items);
        }
    } // namespace ISeinReceiver
} // namespace app::classes::types
