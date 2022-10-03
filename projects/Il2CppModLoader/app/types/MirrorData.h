#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MirrorData {
        namespace {
            app::MirrorData__Class* type_info_ref = nullptr;
        }
        app::MirrorData__Class** type_info = &type_info_ref;
        inline app::MirrorData__Class* get_class() {
            return il2cpp::get_class<app::MirrorData__Class>(type_info, "", "MirrorData");
        }
        inline app::MirrorData* create() {
            return il2cpp::create_object<app::MirrorData>(get_class());
        }
    } // namespace MirrorData
} // namespace app::classes::types
