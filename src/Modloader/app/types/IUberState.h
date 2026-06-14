#pragma once
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/IUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUberState {
        inline app::IUberState__Class** type_info() {
            static app::IUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUberState__Class**)(modloader::win::memory::resolve_rva(0x04725708));
            }
            return cache;
        }
        inline app::IUberState__Class* get_class() {
            return il2cpp::get_class<app::IUberState__Class>(type_info(), "Moon", "IUberState");
        }
        inline app::IUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::IUberState__Array>(get_class(), size);
        }
        inline app::IUberState__Array* create_array(const std::vector<app::IUberState*>& items) {
            return il2cpp::array_new<app::IUberState__Array>(get_class(), items);
        }
    } // namespace IUberState
} // namespace app::classes::types
