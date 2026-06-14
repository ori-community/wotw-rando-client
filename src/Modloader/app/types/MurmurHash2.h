#pragma once
#include <Modloader/app/structs/MurmurHash2.h>
#include <Modloader/app/structs/MurmurHash2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MurmurHash2 {
        inline app::MurmurHash2__Class** type_info() {
            static app::MurmurHash2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MurmurHash2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MurmurHash2__Class* get_class() {
            return il2cpp::get_class<app::MurmurHash2__Class>(type_info(), "", "MurmurHash2");
        }
        inline app::MurmurHash2* create() {
            return il2cpp::create_object<app::MurmurHash2>(get_class());
        }
    } // namespace MurmurHash2
} // namespace app::classes::types
