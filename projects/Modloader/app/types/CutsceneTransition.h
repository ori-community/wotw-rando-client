#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CutsceneTransition {
        namespace {
            inline app::CutsceneTransition__Class* type_info_ref = nullptr;
        }
        inline app::CutsceneTransition__Class** type_info = &type_info_ref;
        inline app::CutsceneTransition__Class* get_class() {
            return il2cpp::get_class<app::CutsceneTransition__Class>(type_info, "", "CutsceneTransition");
        }
        inline app::CutsceneTransition* create() {
            return il2cpp::create_object<app::CutsceneTransition>(get_class());
        }
        inline app::CutsceneTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::CutsceneTransition__Array>(get_class(), size);
        }
        inline app::CutsceneTransition__Array* create_array(const std::vector<app::CutsceneTransition*>& items) {
            return il2cpp::array_new<app::CutsceneTransition__Array>(get_class(), items);
        }
    } // namespace CutsceneTransition
} // namespace app::classes::types
