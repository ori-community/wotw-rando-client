#pragma once
#include <Modloader/app/structs/AnimationMetaData_AnimationData.h>
#include <Modloader/app/structs/AnimationMetaData_AnimationData__Array.h>
#include <Modloader/app/structs/AnimationMetaData_AnimationData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaData_AnimationData {
        inline app::AnimationMetaData_AnimationData__Class** type_info() {
            static app::AnimationMetaData_AnimationData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationMetaData_AnimationData__Class**)(modloader::win::memory::resolve_rva(0x0476BE38));
            }
            return cache;
        }
        inline app::AnimationMetaData_AnimationData__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationMetaData_AnimationData__Class>(type_info(), "", "AnimationMetaData", "AnimationData");
        }
        inline app::AnimationMetaData_AnimationData* create() {
            return il2cpp::create_object<app::AnimationMetaData_AnimationData>(get_class());
        }
        inline app::AnimationMetaData_AnimationData__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationMetaData_AnimationData__Array>(get_class(), size);
        }
        inline app::AnimationMetaData_AnimationData__Array* create_array(const std::vector<app::AnimationMetaData_AnimationData*>& items) {
            return il2cpp::array_new<app::AnimationMetaData_AnimationData__Array>(get_class(), items);
        }
    } // namespace AnimationMetaData_AnimationData
} // namespace app::classes::types
