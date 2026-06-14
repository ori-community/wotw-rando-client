#pragma once
#include <Modloader/app/structs/ActivationParent.h>
#include <Modloader/app/structs/ActivationParent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivationParent {
        inline app::ActivationParent__Class** type_info() {
            static app::ActivationParent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActivationParent__Class**)(modloader::win::memory::resolve_rva(0x0470A558));
            }
            return cache;
        }
        inline app::ActivationParent__Class* get_class() {
            return il2cpp::get_class<app::ActivationParent__Class>(type_info(), "", "ActivationParent");
        }
        inline app::ActivationParent* create() {
            return il2cpp::create_object<app::ActivationParent>(get_class());
        }
    } // namespace ActivationParent
} // namespace app::classes::types
