#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKMapping_BoneMap {
        inline app::IKMapping_BoneMap__Class** type_info = (app::IKMapping_BoneMap__Class**)(modloader::win::memory::resolve_rva(0x04782B00));
        inline app::IKMapping_BoneMap__Class* get_class() {
            return il2cpp::get_nested_class<app::IKMapping_BoneMap__Class>(type_info, "RootMotion.FinalIK", "IKMapping", "BoneMap");
        }
        inline app::IKMapping_BoneMap* create() {
            return il2cpp::create_object<app::IKMapping_BoneMap>(get_class());
        }
        inline app::IKMapping_BoneMap__Array* create_array(int size) {
            return il2cpp::array_new<app::IKMapping_BoneMap__Array>(get_class(), size);
        }
        inline app::IKMapping_BoneMap__Array* create_array(const std::vector<app::IKMapping_BoneMap*>& items) {
            return il2cpp::array_new<app::IKMapping_BoneMap__Array>(get_class(), items);
        }
    } // namespace IKMapping_BoneMap
} // namespace app::classes::types
