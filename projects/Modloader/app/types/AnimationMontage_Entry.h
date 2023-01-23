#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationMontage_Entry__Class.h>
#include <Modloader/app/structs/AnimationMontage_Entry.h>
#include <Modloader/app/structs/AnimationMontage_Entry__Array.h>

namespace app::classes::types {
    namespace AnimationMontage_Entry {
        inline app::AnimationMontage_Entry__Class** type_info = (app::AnimationMontage_Entry__Class**)(modloader::win::memory::resolve_rva(0x04731B38));
        inline app::AnimationMontage_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationMontage_Entry__Class>(type_info, "Moon", "AnimationMontage", "Entry");
        }
        inline app::AnimationMontage_Entry* create() {
            return il2cpp::create_object<app::AnimationMontage_Entry>(get_class());
        }
        inline app::AnimationMontage_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationMontage_Entry__Array>(get_class(), size);
        }
        inline app::AnimationMontage_Entry__Array* create_array(const std::vector<app::AnimationMontage_Entry*>& items) {
            return il2cpp::array_new<app::AnimationMontage_Entry__Array>(get_class(), items);
        }
    } // namespace AnimationMontage_Entry
} // namespace app::classes::types
