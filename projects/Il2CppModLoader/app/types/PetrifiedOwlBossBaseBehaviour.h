#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossBaseBehaviour {
        namespace {
            app::PetrifiedOwlBossBaseBehaviour__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlBossBaseBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossBaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossBaseBehaviour__Class>(type_info, "", "PetrifiedOwlBossBaseBehaviour");
        }
        inline app::PetrifiedOwlBossBaseBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossBaseBehaviour>(get_class());
        }
        inline app::PetrifiedOwlBossBaseBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::PetrifiedOwlBossBaseBehaviour__Array>(get_class(), size);
        }
    } // namespace PetrifiedOwlBossBaseBehaviour
} // namespace app::classes::types
