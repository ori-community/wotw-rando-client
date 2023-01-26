#pragma once
#include <Modloader/app/structs/SceneUberStateCondition.h>
#include <Modloader/app/structs/SceneUberStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneUberStateCondition {
        inline app::SceneUberStateCondition__Class** type_info() {
            static app::SceneUberStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneUberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x047928A0));
            }
            return cache;
        }
        inline app::SceneUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::SceneUberStateCondition__Class>(type_info(), "", "SceneUberStateCondition");
        }
        inline app::SceneUberStateCondition* create() {
            return il2cpp::create_object<app::SceneUberStateCondition>(get_class());
        }
    } // namespace SceneUberStateCondition
} // namespace app::classes::types
