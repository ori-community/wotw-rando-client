#pragma once
#include <Modloader/app/structs/HyperHasher.h>
#include <Modloader/app/structs/HyperHasher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HyperHasher {
        inline app::HyperHasher__Class** type_info() {
            static app::HyperHasher__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HyperHasher__Class**)(modloader::win::memory::resolve_rva(0x047184F0));
            }
            return cache;
        }
        inline app::HyperHasher__Class* get_class() {
            return il2cpp::get_class<app::HyperHasher__Class>(type_info(), "", "HyperHasher");
        }
        inline app::HyperHasher* create() {
            return il2cpp::create_object<app::HyperHasher>(get_class());
        }
    } // namespace HyperHasher
} // namespace app::classes::types
