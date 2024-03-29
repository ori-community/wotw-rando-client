#pragma once
#include <Modloader/app/structs/UberDelegate.h>
#include <Modloader/app/structs/UberDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberDelegate {
        inline app::UberDelegate__Class** type_info() {
            static app::UberDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberDelegate__Class**)(modloader::win::memory::resolve_rva(0x0474B478));
            }
            return cache;
        }
        inline app::UberDelegate__Class* get_class() {
            return il2cpp::get_class<app::UberDelegate__Class>(type_info(), "", "UberDelegate");
        }
        inline app::UberDelegate* create() {
            return il2cpp::create_object<app::UberDelegate>(get_class());
        }
    } // namespace UberDelegate
} // namespace app::classes::types
