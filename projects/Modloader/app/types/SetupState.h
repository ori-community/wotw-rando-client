#pragma once
#include <Modloader/app/structs/SetupState.h>
#include <Modloader/app/structs/SetupState__Array.h>
#include <Modloader/app/structs/SetupState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetupState {
        inline app::SetupState__Class** type_info() {
            static app::SetupState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetupState__Class**)(modloader::win::memory::resolve_rva(0x04725E08));
            }
            return cache;
        }
        inline app::SetupState__Class* get_class() {
            return il2cpp::get_class<app::SetupState__Class>(type_info(), "", "SetupState");
        }
        inline app::SetupState* create() {
            return il2cpp::create_object<app::SetupState>(get_class());
        }
        inline app::SetupState__Array* create_array(int size) {
            return il2cpp::array_new<app::SetupState__Array>(get_class(), size);
        }
        inline app::SetupState__Array* create_array(const std::vector<app::SetupState*>& items) {
            return il2cpp::array_new<app::SetupState__Array>(get_class(), items);
        }
    } // namespace SetupState
} // namespace app::classes::types
