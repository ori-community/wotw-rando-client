#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClothCage {
        namespace {
            inline app::ClothCage__Class* type_info_ref = nullptr;
        }
        inline app::ClothCage__Class** type_info = &type_info_ref;
        inline app::ClothCage__Class* get_class() {
            return il2cpp::get_class<app::ClothCage__Class>(type_info, "", "ClothCage");
        }
        inline app::ClothCage* create() {
            return il2cpp::create_object<app::ClothCage>(get_class());
        }
    } // namespace ClothCage
} // namespace app::classes::types
