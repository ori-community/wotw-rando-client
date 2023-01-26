#pragma once
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_SetSceneHiddenAction.h>
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array.h>
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Boxed.h>
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparencyAnimatorSystemStrategy_SetSceneHiddenAction {
        inline app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class** type_info() {
            static app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class**)(modloader::win::memory::resolve_rva(0x047910A8));
            }
            return cache;
        }
        inline app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class* get_class() {
            return il2cpp::get_nested_class<app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class>(type_info(), "Moon.Timeline", "TransparencyAnimatorSystemStrategy", "SetSceneHiddenAction");
        }
        inline app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction* create() {
            return il2cpp::create_object<app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction>(get_class());
        }
        inline app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Boxed* box(app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction value) {
            return il2cpp::box_value<app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Boxed>(get_class(), value);
        }
        inline app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array* create_array(int size) {
            return il2cpp::array_new<app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array>(get_class(), size);
        }
        inline app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array* create_array(const std::vector<app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction>& items) {
            return il2cpp::array_new<app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array>(get_class(), items);
        }
    } // namespace TransparencyAnimatorSystemStrategy_SetSceneHiddenAction
} // namespace app::classes::types
