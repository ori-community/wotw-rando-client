#pragma once
#include <Modloader/app/structs/OnDelegate.h>
#include <Modloader/app/structs/OnDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnDelegate {
        inline app::OnDelegate__Class** type_info() {
            static app::OnDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OnDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472B640));
            }
            return cache;
        }
        inline app::OnDelegate__Class* get_class() {
            return il2cpp::get_class<app::OnDelegate__Class>(type_info(), "", "OnDelegate");
        }
        inline app::OnDelegate* create() {
            return il2cpp::create_object<app::OnDelegate>(get_class());
        }
    } // namespace OnDelegate
} // namespace app::classes::types
