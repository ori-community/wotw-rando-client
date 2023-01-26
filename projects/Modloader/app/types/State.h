#pragma once
#include <Modloader/app/structs/State.h>
#include <Modloader/app/structs/State__Array.h>
#include <Modloader/app/structs/State__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace State {
        inline app::State__Class** type_info() {
            static app::State__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::State__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::State__Class* get_class() {
            return il2cpp::get_class<app::State__Class>(type_info(), "AK.Wwise", "State");
        }
        inline app::State* create() {
            return il2cpp::create_object<app::State>(get_class());
        }
        inline app::State__Array* create_array(int size) {
            return il2cpp::array_new<app::State__Array>(get_class(), size);
        }
        inline app::State__Array* create_array(const std::vector<app::State*>& items) {
            return il2cpp::array_new<app::State__Array>(get_class(), items);
        }
    } // namespace State
} // namespace app::classes::types
