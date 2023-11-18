#pragma once
#include <Modloader/app/structs/UberStateModifierDataVirtualAnimatorFactory.h>
#include <Modloader/app/structs/UberStateModifierDataVirtualAnimatorFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateModifierDataVirtualAnimatorFactory {
        inline app::UberStateModifierDataVirtualAnimatorFactory__Class** type_info() {
            static app::UberStateModifierDataVirtualAnimatorFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateModifierDataVirtualAnimatorFactory__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateModifierDataVirtualAnimatorFactory__Class* get_class() {
            return il2cpp::get_class<app::UberStateModifierDataVirtualAnimatorFactory__Class>(type_info(), "", "UberStateModifierDataVirtualAnimatorFactory");
        }
        inline app::UberStateModifierDataVirtualAnimatorFactory* create() {
            return il2cpp::create_object<app::UberStateModifierDataVirtualAnimatorFactory>(get_class());
        }
    } // namespace UberStateModifierDataVirtualAnimatorFactory
} // namespace app::classes::types
