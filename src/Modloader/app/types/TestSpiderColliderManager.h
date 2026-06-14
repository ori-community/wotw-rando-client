#pragma once
#include <Modloader/app/structs/TestSpiderColliderManager.h>
#include <Modloader/app/structs/TestSpiderColliderManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestSpiderColliderManager {
        inline app::TestSpiderColliderManager__Class** type_info() {
            static app::TestSpiderColliderManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TestSpiderColliderManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TestSpiderColliderManager__Class* get_class() {
            return il2cpp::get_class<app::TestSpiderColliderManager__Class>(type_info(), "", "TestSpiderColliderManager");
        }
        inline app::TestSpiderColliderManager* create() {
            return il2cpp::create_object<app::TestSpiderColliderManager>(get_class());
        }
    } // namespace TestSpiderColliderManager
} // namespace app::classes::types
