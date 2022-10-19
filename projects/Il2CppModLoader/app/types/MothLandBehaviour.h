#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MothLandBehaviour {
        namespace {
            inline app::MothLandBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MothLandBehaviour__Class** type_info = &type_info_ref;
        inline app::MothLandBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MothLandBehaviour__Class>(type_info, "", "MothLandBehaviour");
        }
        inline app::MothLandBehaviour* create() {
            return il2cpp::create_object<app::MothLandBehaviour>(get_class());
        }
    } // namespace MothLandBehaviour
} // namespace app::classes::types
