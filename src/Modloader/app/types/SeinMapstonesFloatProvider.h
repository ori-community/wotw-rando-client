#pragma once
#include <Modloader/app/structs/SeinMapstonesFloatProvider.h>
#include <Modloader/app/structs/SeinMapstonesFloatProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMapstonesFloatProvider {
        inline app::SeinMapstonesFloatProvider__Class** type_info() {
            static app::SeinMapstonesFloatProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMapstonesFloatProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMapstonesFloatProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinMapstonesFloatProvider__Class>(type_info(), "", "SeinMapstonesFloatProvider");
        }
        inline app::SeinMapstonesFloatProvider* create() {
            return il2cpp::create_object<app::SeinMapstonesFloatProvider>(get_class());
        }
    } // namespace SeinMapstonesFloatProvider
} // namespace app::classes::types
