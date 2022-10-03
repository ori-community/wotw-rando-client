#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossSideScrapeBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlBossSideScrapeBehaviour__Class** type_info;
        inline app::PetrifiedOwlBossSideScrapeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossSideScrapeBehaviour__Class>(type_info, "", "PetrifiedOwlBossSideScrapeBehaviour");
        }
        inline app::PetrifiedOwlBossSideScrapeBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossSideScrapeBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossSideScrapeBehaviour
} // namespace app::classes::types
