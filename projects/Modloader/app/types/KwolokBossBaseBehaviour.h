#pragma once
#include <Modloader/app/structs/KwolokBossBaseBehaviour.h>
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Array.h>
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossBaseBehaviour {
        inline app::KwolokBossBaseBehaviour__Class** type_info() {
            static app::KwolokBossBaseBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossBaseBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossBaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossBaseBehaviour__Class>(type_info(), "", "KwolokBossBaseBehaviour");
        }
        inline app::KwolokBossBaseBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossBaseBehaviour>(get_class());
        }
        inline app::KwolokBossBaseBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::KwolokBossBaseBehaviour__Array>(get_class(), size);
        }
        inline app::KwolokBossBaseBehaviour__Array* create_array(const std::vector<app::KwolokBossBaseBehaviour*>& items) {
            return il2cpp::array_new<app::KwolokBossBaseBehaviour__Array>(get_class(), items);
        }
    } // namespace KwolokBossBaseBehaviour
} // namespace app::classes::types
