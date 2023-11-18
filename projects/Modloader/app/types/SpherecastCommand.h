#pragma once
#include <Modloader/app/structs/SpherecastCommand.h>
#include <Modloader/app/structs/SpherecastCommand__Array.h>
#include <Modloader/app/structs/SpherecastCommand__Boxed.h>
#include <Modloader/app/structs/SpherecastCommand__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpherecastCommand {
        inline app::SpherecastCommand__Class** type_info() {
            static app::SpherecastCommand__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpherecastCommand__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpherecastCommand__Class* get_class() {
            return il2cpp::get_class<app::SpherecastCommand__Class>(type_info(), "UnityEngine", "SpherecastCommand");
        }
        inline app::SpherecastCommand* create() {
            return il2cpp::create_object<app::SpherecastCommand>(get_class());
        }
        inline app::SpherecastCommand__Boxed* box(app::SpherecastCommand value) {
            return il2cpp::box_value<app::SpherecastCommand__Boxed>(get_class(), value);
        }
        inline app::SpherecastCommand__Array* create_array(int size) {
            return il2cpp::array_new<app::SpherecastCommand__Array>(get_class(), size);
        }
        inline app::SpherecastCommand__Array* create_array(const std::vector<app::SpherecastCommand>& items) {
            return il2cpp::array_new<app::SpherecastCommand__Array>(get_class(), items);
        }
    } // namespace SpherecastCommand
} // namespace app::classes::types
