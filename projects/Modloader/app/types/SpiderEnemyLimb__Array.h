#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderEnemyLimb__Array__Class.h>
#include <Modloader/app/structs/SpiderEnemyLimb__Array.h>

namespace app::classes::types {
    namespace SpiderEnemyLimb__Array {
        namespace {
            inline app::SpiderEnemyLimb__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpiderEnemyLimb__Array__Class** type_info = &type_info_ref;
        inline app::SpiderEnemyLimb__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderEnemyLimb__Array__Class>(type_info, "", "SpiderEnemyLimb[]");
        }
        inline app::SpiderEnemyLimb__Array* create() {
            return il2cpp::create_object<app::SpiderEnemyLimb__Array>(get_class());
        }
    } // namespace SpiderEnemyLimb__Array
} // namespace app::classes::types
