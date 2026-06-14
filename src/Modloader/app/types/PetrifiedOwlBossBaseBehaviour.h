#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Array.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossBaseBehaviour {
        inline app::PetrifiedOwlBossBaseBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossBaseBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossBaseBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossBaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossBaseBehaviour__Class>(type_info(), "", "PetrifiedOwlBossBaseBehaviour");
        }
        inline app::PetrifiedOwlBossBaseBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossBaseBehaviour>(get_class());
        }
        inline app::PetrifiedOwlBossBaseBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::PetrifiedOwlBossBaseBehaviour__Array>(get_class(), size);
        }
        inline app::PetrifiedOwlBossBaseBehaviour__Array* create_array(const std::vector<app::PetrifiedOwlBossBaseBehaviour*>& items) {
            return il2cpp::array_new<app::PetrifiedOwlBossBaseBehaviour__Array>(get_class(), items);
        }
    } // namespace PetrifiedOwlBossBaseBehaviour
} // namespace app::classes::types
