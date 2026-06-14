#pragma once
#include <Modloader/app/structs/InstantiateAnimatorB.h>
#include <Modloader/app/structs/InstantiateAnimatorB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiateAnimatorB {
        inline app::InstantiateAnimatorB__Class** type_info() {
            static app::InstantiateAnimatorB__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstantiateAnimatorB__Class**)(modloader::win::memory::resolve_rva(0x047354A0));
            }
            return cache;
        }
        inline app::InstantiateAnimatorB__Class* get_class() {
            return il2cpp::get_class<app::InstantiateAnimatorB__Class>(type_info(), "", "InstantiateAnimatorB");
        }
        inline app::InstantiateAnimatorB* create() {
            return il2cpp::create_object<app::InstantiateAnimatorB>(get_class());
        }
    } // namespace InstantiateAnimatorB
} // namespace app::classes::types
