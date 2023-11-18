#pragma once
#include <Modloader/app/structs/SplitTurnAnimation.h>
#include <Modloader/app/structs/SplitTurnAnimation__Array.h>
#include <Modloader/app/structs/SplitTurnAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SplitTurnAnimation {
        inline app::SplitTurnAnimation__Class** type_info() {
            static app::SplitTurnAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SplitTurnAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SplitTurnAnimation__Class* get_class() {
            return il2cpp::get_class<app::SplitTurnAnimation__Class>(type_info(), "", "SplitTurnAnimation");
        }
        inline app::SplitTurnAnimation* create() {
            return il2cpp::create_object<app::SplitTurnAnimation>(get_class());
        }
        inline app::SplitTurnAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::SplitTurnAnimation__Array>(get_class(), size);
        }
        inline app::SplitTurnAnimation__Array* create_array(const std::vector<app::SplitTurnAnimation*>& items) {
            return il2cpp::array_new<app::SplitTurnAnimation__Array>(get_class(), items);
        }
    } // namespace SplitTurnAnimation
} // namespace app::classes::types
