#pragma once
#include <Modloader/app/structs/SandWormEntity_SandWormSquetch.h>
#include <Modloader/app/structs/SandWormEntity_SandWormSquetch__Array.h>
#include <Modloader/app/structs/SandWormEntity_SandWormSquetch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity_SandWormSquetch {
        inline app::SandWormEntity_SandWormSquetch__Class** type_info() {
            static app::SandWormEntity_SandWormSquetch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormEntity_SandWormSquetch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormEntity_SandWormSquetch__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_SandWormSquetch__Class>(type_info(), "", "SandWormEntity", "SandWormSquetch");
        }
        inline app::SandWormEntity_SandWormSquetch* create() {
            return il2cpp::create_object<app::SandWormEntity_SandWormSquetch>(get_class());
        }
        inline app::SandWormEntity_SandWormSquetch__Array* create_array(int size) {
            return il2cpp::array_new<app::SandWormEntity_SandWormSquetch__Array>(get_class(), size);
        }
        inline app::SandWormEntity_SandWormSquetch__Array* create_array(const std::vector<app::SandWormEntity_SandWormSquetch*>& items) {
            return il2cpp::array_new<app::SandWormEntity_SandWormSquetch__Array>(get_class(), items);
        }
    } // namespace SandWormEntity_SandWormSquetch
} // namespace app::classes::types
