#pragma once
#include <Modloader/app/structs/IKMappingBone.h>
#include <Modloader/app/structs/IKMappingBone__Array.h>
#include <Modloader/app/structs/IKMappingBone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKMappingBone {
        inline app::IKMappingBone__Class** type_info() {
            static app::IKMappingBone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKMappingBone__Class**)(modloader::win::memory::resolve_rva(0x04784C20));
            }
            return cache;
        }
        inline app::IKMappingBone__Class* get_class() {
            return il2cpp::get_class<app::IKMappingBone__Class>(type_info(), "RootMotion.FinalIK", "IKMappingBone");
        }
        inline app::IKMappingBone* create() {
            return il2cpp::create_object<app::IKMappingBone>(get_class());
        }
        inline app::IKMappingBone__Array* create_array(int size) {
            return il2cpp::array_new<app::IKMappingBone__Array>(get_class(), size);
        }
        inline app::IKMappingBone__Array* create_array(const std::vector<app::IKMappingBone*>& items) {
            return il2cpp::array_new<app::IKMappingBone__Array>(get_class(), items);
        }
    } // namespace IKMappingBone
} // namespace app::classes::types
