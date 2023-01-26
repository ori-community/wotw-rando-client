#pragma once
#include <Modloader/app/structs/IKMapping_BoneMap.h>
#include <Modloader/app/structs/IKMapping_BoneMap__Array.h>
#include <Modloader/app/structs/IKMapping_BoneMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKMapping_BoneMap {
        inline app::IKMapping_BoneMap__Class** type_info() {
            static app::IKMapping_BoneMap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKMapping_BoneMap__Class**)(modloader::win::memory::resolve_rva(0x04782B00));
            }
            return cache;
        }
        inline app::IKMapping_BoneMap__Class* get_class() {
            return il2cpp::get_nested_class<app::IKMapping_BoneMap__Class>(type_info(), "RootMotion.FinalIK", "IKMapping", "BoneMap");
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
