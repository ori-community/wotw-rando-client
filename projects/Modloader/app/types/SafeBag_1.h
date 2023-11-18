#pragma once
#include <Modloader/app/structs/SafeBag_1.h>
#include <Modloader/app/structs/SafeBag_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeBag_1 {
        inline app::SafeBag_1__Class** type_info() {
            static app::SafeBag_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SafeBag_1__Class**)(modloader::win::memory::resolve_rva(0x0474CD00));
            }
            return cache;
        }
        inline app::SafeBag_1__Class* get_class() {
            return il2cpp::get_class<app::SafeBag_1__Class>(type_info(), "Mono.Security.X509", "SafeBag");
        }
        inline app::SafeBag_1* create() {
            return il2cpp::create_object<app::SafeBag_1>(get_class());
        }
    } // namespace SafeBag_1
} // namespace app::classes::types
