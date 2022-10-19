#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossIntroBehaviour {
        namespace {
            inline app::SpiderBossIntroBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossIntroBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossIntroBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossIntroBehaviour__Class>(type_info, "", "SpiderBossIntroBehaviour");
        }
        inline app::SpiderBossIntroBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossIntroBehaviour>(get_class());
        }
    } // namespace SpiderBossIntroBehaviour
} // namespace app::classes::types
