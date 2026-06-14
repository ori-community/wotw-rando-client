#pragma once
#include <Modloader/app/structs/SpiderBossBaseBehaviour__Array.h>
#include <Modloader/app/structs/SpiderBossBaseBehaviour__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossBaseBehaviour__Array {
        inline app::SpiderBossBaseBehaviour__Array__Class** type_info() {
            static app::SpiderBossBaseBehaviour__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossBaseBehaviour__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossBaseBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBaseBehaviour__Array__Class>(type_info(), "", "SpiderBossBaseBehaviour[]");
        }
        inline app::SpiderBossBaseBehaviour__Array* create() {
            return il2cpp::create_object<app::SpiderBossBaseBehaviour__Array>(get_class());
        }
    } // namespace SpiderBossBaseBehaviour__Array
} // namespace app::classes::types
