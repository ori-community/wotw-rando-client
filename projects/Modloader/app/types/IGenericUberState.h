#pragma once
#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/IGenericUberState__Array.h>
#include <Modloader/app/structs/IGenericUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGenericUberState {
        inline app::IGenericUberState__Class** type_info() {
            static app::IGenericUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IGenericUberState__Class**)(modloader::win::memory::resolve_rva(0x04799938));
            }
            return cache;
        }
        inline app::IGenericUberState__Class* get_class() {
            return il2cpp::get_class<app::IGenericUberState__Class>(type_info(), "Moon", "IGenericUberState");
        }
        inline app::IGenericUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::IGenericUberState__Array>(get_class(), size);
        }
        inline app::IGenericUberState__Array* create_array(const std::vector<app::IGenericUberState*>& items) {
            return il2cpp::array_new<app::IGenericUberState__Array>(get_class(), items);
        }
    } // namespace IGenericUberState
} // namespace app::classes::types
