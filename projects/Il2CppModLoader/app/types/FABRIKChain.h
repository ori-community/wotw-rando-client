#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FABRIKChain {
        namespace {
            app::FABRIKChain__Class* type_info_ref = nullptr;
        }
        app::FABRIKChain__Class** type_info = &type_info_ref;
        inline app::FABRIKChain__Class* get_class() {
            return il2cpp::get_class<app::FABRIKChain__Class>(type_info, "RootMotion.FinalIK", "FABRIKChain");
        }
        inline app::FABRIKChain* create() {
            return il2cpp::create_object<app::FABRIKChain>(get_class());
        }
        inline app::FABRIKChain__Array* create_array(int size) {
            return il2cpp::array_new<app::FABRIKChain__Array>(get_class(), size);
        }
    } // namespace FABRIKChain
} // namespace app::classes::types
