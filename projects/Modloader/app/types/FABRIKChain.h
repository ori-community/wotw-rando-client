#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FABRIKChain {
        namespace {
            inline app::FABRIKChain__Class* type_info_ref = nullptr;
        }
        inline app::FABRIKChain__Class** type_info = &type_info_ref;
        inline app::FABRIKChain__Class* get_class() {
            return il2cpp::get_class<app::FABRIKChain__Class>(type_info, "RootMotion.FinalIK", "FABRIKChain");
        }
        inline app::FABRIKChain* create() {
            return il2cpp::create_object<app::FABRIKChain>(get_class());
        }
        inline app::FABRIKChain__Array* create_array(int size) {
            return il2cpp::array_new<app::FABRIKChain__Array>(get_class(), size);
        }
        inline app::FABRIKChain__Array* create_array(const std::vector<app::FABRIKChain*>& items) {
            return il2cpp::array_new<app::FABRIKChain__Array>(get_class(), items);
        }
    } // namespace FABRIKChain
} // namespace app::classes::types
