#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossButtSlamBehaviour {
        namespace {
            app::KwolokBossButtSlamBehaviour__Class* type_info_ref = nullptr;
        }
        app::KwolokBossButtSlamBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossButtSlamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossButtSlamBehaviour__Class>(type_info, "", "KwolokBossButtSlamBehaviour");
        }
        inline app::KwolokBossButtSlamBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossButtSlamBehaviour>(get_class());
        }
    } // namespace KwolokBossButtSlamBehaviour
} // namespace app::classes::types
