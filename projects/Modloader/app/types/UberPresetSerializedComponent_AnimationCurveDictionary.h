#pragma once
#include <Modloader/app/structs/UberPresetSerializedComponent_AnimationCurveDictionary.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_AnimationCurveDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_AnimationCurveDictionary {
        inline app::UberPresetSerializedComponent_AnimationCurveDictionary__Class** type_info() {
            static app::UberPresetSerializedComponent_AnimationCurveDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPresetSerializedComponent_AnimationCurveDictionary__Class**)(modloader::win::memory::resolve_rva(0x04766FF0));
            }
            return cache;
        }
        inline app::UberPresetSerializedComponent_AnimationCurveDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_AnimationCurveDictionary__Class>(type_info(), "", "UberPresetSerializedComponent", "AnimationCurveDictionary");
        }
        inline app::UberPresetSerializedComponent_AnimationCurveDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_AnimationCurveDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_AnimationCurveDictionary
} // namespace app::classes::types
