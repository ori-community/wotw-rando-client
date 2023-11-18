#pragma once
#include <Modloader/app/structs/SandWormTailPost.h>
#include <Modloader/app/structs/SandWormTailPost__Array.h>
#include <Modloader/app/structs/SandWormTailPost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormTailPost {
        inline app::SandWormTailPost__Class** type_info() {
            static app::SandWormTailPost__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormTailPost__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormTailPost__Class* get_class() {
            return il2cpp::get_class<app::SandWormTailPost__Class>(type_info(), "", "SandWormTailPost");
        }
        inline app::SandWormTailPost* create() {
            return il2cpp::create_object<app::SandWormTailPost>(get_class());
        }
        inline app::SandWormTailPost__Array* create_array(int size) {
            return il2cpp::array_new<app::SandWormTailPost__Array>(get_class(), size);
        }
        inline app::SandWormTailPost__Array* create_array(const std::vector<app::SandWormTailPost*>& items) {
            return il2cpp::array_new<app::SandWormTailPost__Array>(get_class(), items);
        }
    } // namespace SandWormTailPost
} // namespace app::classes::types
