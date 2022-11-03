#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScaleBasedOnFloatProvider {
        namespace {
            inline app::ScaleBasedOnFloatProvider__Class* type_info_ref = nullptr;
        }
        inline app::ScaleBasedOnFloatProvider__Class** type_info = &type_info_ref;
        inline app::ScaleBasedOnFloatProvider__Class* get_class() {
            return il2cpp::get_class<app::ScaleBasedOnFloatProvider__Class>(type_info, "", "ScaleBasedOnFloatProvider");
        }
        inline app::ScaleBasedOnFloatProvider* create() {
            return il2cpp::create_object<app::ScaleBasedOnFloatProvider>(get_class());
        }
    } // namespace ScaleBasedOnFloatProvider
} // namespace app::classes::types
