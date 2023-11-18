#pragma once
#include <Modloader/app/structs/ICachableInput.h>
#include <Modloader/app/structs/ICachableInput__Array.h>
#include <Modloader/app/structs/ICachableInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICachableInput {
        inline app::ICachableInput__Class** type_info() {
            static app::ICachableInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICachableInput__Class**)(modloader::win::memory::resolve_rva(0x047042A0));
            }
            return cache;
        }
        inline app::ICachableInput__Class* get_class() {
            return il2cpp::get_class<app::ICachableInput__Class>(type_info(), "SmartInput", "ICachableInput");
        }
        inline app::ICachableInput__Array* create_array(int size) {
            return il2cpp::array_new<app::ICachableInput__Array>(get_class(), size);
        }
        inline app::ICachableInput__Array* create_array(const std::vector<app::ICachableInput*>& items) {
            return il2cpp::array_new<app::ICachableInput__Array>(get_class(), items);
        }
    } // namespace ICachableInput
} // namespace app::classes::types
