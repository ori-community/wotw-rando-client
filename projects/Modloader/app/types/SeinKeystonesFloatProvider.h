#pragma once
#include <Modloader/app/structs/SeinKeystonesFloatProvider.h>
#include <Modloader/app/structs/SeinKeystonesFloatProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinKeystonesFloatProvider {
        inline app::SeinKeystonesFloatProvider__Class** type_info() {
            static app::SeinKeystonesFloatProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinKeystonesFloatProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinKeystonesFloatProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinKeystonesFloatProvider__Class>(type_info(), "", "SeinKeystonesFloatProvider");
        }
        inline app::SeinKeystonesFloatProvider* create() {
            return il2cpp::create_object<app::SeinKeystonesFloatProvider>(get_class());
        }
    } // namespace SeinKeystonesFloatProvider
} // namespace app::classes::types
