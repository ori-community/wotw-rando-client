#pragma once
#include <Modloader/app/structs/RandomObjectGenerator.h>
#include <Modloader/app/structs/RandomObjectGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RandomObjectGenerator {
        inline app::RandomObjectGenerator__Class** type_info() {
            static app::RandomObjectGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RandomObjectGenerator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RandomObjectGenerator__Class* get_class() {
            return il2cpp::get_class<app::RandomObjectGenerator__Class>(type_info(), "", "RandomObjectGenerator");
        }
        inline app::RandomObjectGenerator* create() {
            return il2cpp::create_object<app::RandomObjectGenerator>(get_class());
        }
    } // namespace RandomObjectGenerator
} // namespace app::classes::types
