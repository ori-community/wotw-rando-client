#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadFromMasterAtStart {
        namespace {
            app::LoadFromMasterAtStart__Class* type_info_ref = nullptr;
        }
        app::LoadFromMasterAtStart__Class** type_info = &type_info_ref;
        inline app::LoadFromMasterAtStart__Class* get_class() {
            return il2cpp::get_class<app::LoadFromMasterAtStart__Class>(type_info, "", "LoadFromMasterAtStart");
        }
        inline app::LoadFromMasterAtStart* create() {
            return il2cpp::create_object<app::LoadFromMasterAtStart>(get_class());
        }
    } // namespace LoadFromMasterAtStart
} // namespace app::classes::types
