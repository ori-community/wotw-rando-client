#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpriteState__Class.h>
#include <Modloader/app/structs/SpriteState.h>
#include <Modloader/app/structs/SpriteState__Boxed.h>
#include <Modloader/app/structs/SpriteState__Array.h>

namespace app::classes::types {
    namespace SpriteState {
        namespace {
            inline app::SpriteState__Class* type_info_ref = nullptr;
        }
        inline app::SpriteState__Class** type_info = &type_info_ref;
        inline app::SpriteState__Class* get_class() {
            return il2cpp::get_class<app::SpriteState__Class>(type_info, "UnityEngine.UI", "SpriteState");
        }
        inline app::SpriteState* create() {
            return il2cpp::create_object<app::SpriteState>(get_class());
        }
        inline app::SpriteState__Boxed* box(app::SpriteState value) {
            return il2cpp::box_value<app::SpriteState__Boxed>(get_class(), value);
        }
        inline app::SpriteState__Array* create_array(int size) {
            return il2cpp::array_new<app::SpriteState__Array>(get_class(), size);
        }
        inline app::SpriteState__Array* create_array(const std::vector<app::SpriteState>& items) {
            return il2cpp::array_new<app::SpriteState__Array>(get_class(), items);
        }
    } // namespace SpriteState
} // namespace app::classes::types
