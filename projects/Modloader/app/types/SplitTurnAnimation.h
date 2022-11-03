#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SplitTurnAnimation {
        namespace {
            inline app::SplitTurnAnimation__Class* type_info_ref = nullptr;
        }
        inline app::SplitTurnAnimation__Class** type_info = &type_info_ref;
        inline app::SplitTurnAnimation__Class* get_class() {
            return il2cpp::get_class<app::SplitTurnAnimation__Class>(type_info, "", "SplitTurnAnimation");
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
