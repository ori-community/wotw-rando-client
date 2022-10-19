#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimationAssociation_AnimationAssociationEntry {
        namespace {
            inline app::MoonAnimationAssociation_AnimationAssociationEntry__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimationAssociation_AnimationAssociationEntry__Class** type_info = &type_info_ref;
        inline app::MoonAnimationAssociation_AnimationAssociationEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimationAssociation_AnimationAssociationEntry__Class>(type_info, "", "MoonAnimationAssociation", "AnimationAssociationEntry");
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
