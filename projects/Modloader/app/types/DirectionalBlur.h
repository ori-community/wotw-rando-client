#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DirectionalBlur__Class.h>
#include <Modloader/app/structs/DirectionalBlur.h>

namespace app::classes::types {
    namespace DirectionalBlur {
        namespace {
            inline app::DirectionalBlur__Class* type_info_ref = nullptr;
        }
        inline app::DirectionalBlur__Class** type_info = &type_info_ref;
        inline app::DirectionalBlur__Class* get_class() {
            return il2cpp::get_class<app::DirectionalBlur__Class>(type_info, "Colorful", "DirectionalBlur");
        }
        inline app::DirectionalBlur* create() {
            return il2cpp::create_object<app::DirectionalBlur>(get_class());
        }
    } // namespace DirectionalBlur
} // namespace app::classes::types
