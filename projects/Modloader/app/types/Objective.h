#pragma once
#include <Modloader/app/structs/Objective.h>
#include <Modloader/app/structs/Objective__Array.h>
#include <Modloader/app/structs/Objective__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Objective {
        inline app::Objective__Class** type_info() {
            static app::Objective__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Objective__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Objective__Class* get_class() {
            return il2cpp::get_class<app::Objective__Class>(type_info(), "", "Objective");
        }
        inline app::Objective* create() {
            return il2cpp::create_object<app::Objective>(get_class());
        }
        inline app::Objective__Array* create_array(int size) {
            return il2cpp::array_new<app::Objective__Array>(get_class(), size);
        }
        inline app::Objective__Array* create_array(const std::vector<app::Objective*>& items) {
            return il2cpp::array_new<app::Objective__Array>(get_class(), items);
        }
    } // namespace Objective
} // namespace app::classes::types
