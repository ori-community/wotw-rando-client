#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpriteState__Array__Class.h>
#include <Modloader/app/structs/SpriteState__Array.h>

namespace app::classes::types {
    namespace SpriteState__Array {
        namespace {
            inline app::SpriteState__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpriteState__Array__Class** type_info = &type_info_ref;
        inline app::SpriteState__Array__Class* get_class() {
            return il2cpp::get_class<app::SpriteState__Array__Class>(type_info, "UnityEngine.UI", "SpriteState[]");
        }
        inline app::SpriteState__Array* create() {
            return il2cpp::create_object<app::SpriteState__Array>(get_class());
        }
    } // namespace SpriteState__Array
} // namespace app::classes::types
