#pragma once
#include <Modloader/app/structs/FBIKChain.h>
#include <Modloader/app/structs/FBIKChain__Array.h>
#include <Modloader/app/structs/FBIKChain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FBIKChain {
        inline app::FBIKChain__Class** type_info() {
            static app::FBIKChain__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FBIKChain__Class**)(modloader::win::memory::resolve_rva(0x047701F0));
            }
            return cache;
        }
        inline app::FBIKChain__Class* get_class() {
            return il2cpp::get_class<app::FBIKChain__Class>(type_info(), "RootMotion.FinalIK", "FBIKChain");
        }
        inline app::FBIKChain* create() {
            return il2cpp::create_object<app::FBIKChain>(get_class());
        }
        inline app::FBIKChain__Array* create_array(int size) {
            return il2cpp::array_new<app::FBIKChain__Array>(get_class(), size);
        }
        inline app::FBIKChain__Array* create_array(const std::vector<app::FBIKChain*>& items) {
            return il2cpp::array_new<app::FBIKChain__Array>(get_class(), items);
        }
    } // namespace FBIKChain
} // namespace app::classes::types
