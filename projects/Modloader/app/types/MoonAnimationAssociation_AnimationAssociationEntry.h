#pragma once
#include <Modloader/app/structs/MoonAnimationAssociation_AnimationAssociationEntry.h>
#include <Modloader/app/structs/MoonAnimationAssociation_AnimationAssociationEntry__Array.h>
#include <Modloader/app/structs/MoonAnimationAssociation_AnimationAssociationEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimationAssociation_AnimationAssociationEntry {
        inline app::MoonAnimationAssociation_AnimationAssociationEntry__Class** type_info() {
            static app::MoonAnimationAssociation_AnimationAssociationEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimationAssociation_AnimationAssociationEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimationAssociation_AnimationAssociationEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimationAssociation_AnimationAssociationEntry__Class>(type_info(), "", "MoonAnimationAssociation", "AnimationAssociationEntry");
        }
        inline app::MoonAnimationAssociation_AnimationAssociationEntry* create() {
            return il2cpp::create_object<app::MoonAnimationAssociation_AnimationAssociationEntry>(get_class());
        }
        inline app::MoonAnimationAssociation_AnimationAssociationEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimationAssociation_AnimationAssociationEntry__Array>(get_class(), size);
        }
        inline app::MoonAnimationAssociation_AnimationAssociationEntry__Array* create_array(const std::vector<app::MoonAnimationAssociation_AnimationAssociationEntry*>& items) {
            return il2cpp::array_new<app::MoonAnimationAssociation_AnimationAssociationEntry__Array>(get_class(), items);
        }
    } // namespace MoonAnimationAssociation_AnimationAssociationEntry
} // namespace app::classes::types
