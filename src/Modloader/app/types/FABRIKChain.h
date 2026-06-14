#pragma once
#include <Modloader/app/structs/FABRIKChain.h>
#include <Modloader/app/structs/FABRIKChain__Array.h>
#include <Modloader/app/structs/FABRIKChain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FABRIKChain {
        inline app::FABRIKChain__Class** type_info() {
            static app::FABRIKChain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FABRIKChain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FABRIKChain__Class* get_class() {
            return il2cpp::get_class<app::FABRIKChain__Class>(type_info(), "RootMotion.FinalIK", "FABRIKChain");
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
