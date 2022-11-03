#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TestSpiderColliderManager {
        namespace {
            inline app::TestSpiderColliderManager__Class* type_info_ref = nullptr;
        }
        inline app::TestSpiderColliderManager__Class** type_info = &type_info_ref;
        inline app::TestSpiderColliderManager__Class* get_class() {
            return il2cpp::get_class<app::TestSpiderColliderManager__Class>(type_info, "", "TestSpiderColliderManager");
        }
        inline app::TestSpiderColliderManager* create() {
            return il2cpp::create_object<app::TestSpiderColliderManager>(get_class());
        }
    } // namespace TestSpiderColliderManager
} // namespace app::classes::types
