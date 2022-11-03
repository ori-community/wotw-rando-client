#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderEnemy {
        namespace {
            inline app::SpiderEnemy__Class* type_info_ref = nullptr;
        }
        inline app::SpiderEnemy__Class** type_info = &type_info_ref;
        inline app::SpiderEnemy__Class* get_class() {
            return il2cpp::get_class<app::SpiderEnemy__Class>(type_info, "", "SpiderEnemy");
        }
        inline app::SpiderEnemy* create() {
            return il2cpp::create_object<app::SpiderEnemy>(get_class());
        }
    } // namespace SpiderEnemy
} // namespace app::classes::types
