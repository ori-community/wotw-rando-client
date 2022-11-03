#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinMapstonesFloatProvider {
        namespace {
            inline app::SeinMapstonesFloatProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinMapstonesFloatProvider__Class** type_info = &type_info_ref;
        inline app::SeinMapstonesFloatProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinMapstonesFloatProvider__Class>(type_info, "", "SeinMapstonesFloatProvider");
        }
        inline app::SeinMapstonesFloatProvider* create() {
            return il2cpp::create_object<app::SeinMapstonesFloatProvider>(get_class());
        }
    } // namespace SeinMapstonesFloatProvider
} // namespace app::classes::types
