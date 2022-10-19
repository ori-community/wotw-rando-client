#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateVolitileOverrideAnimator {
        inline app::UberStateVolitileOverrideAnimator__Class** type_info = (app::UberStateVolitileOverrideAnimator__Class**)(modloader::win::memory::resolve_rva(0x04704CB8));
        inline app::UberStateVolitileOverrideAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberStateVolitileOverrideAnimator__Class>(type_info, "Moon.Timeline", "UberStateVolitileOverrideAnimator");
        }
        inline app::UberStateVolitileOverrideAnimator* create() {
            return il2cpp::create_object<app::UberStateVolitileOverrideAnimator>(get_class());
        }
        inline app::UberStateVolitileOverrideAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateVolitileOverrideAnimator__Array>(get_class(), size);
        }
        inline app::UberStateVolitileOverrideAnimator__Array* create_array(const std::vector<app::UberStateVolitileOverrideAnimator*>& items) {
            return il2cpp::array_new<app::UberStateVolitileOverrideAnimator__Array>(get_class(), items);
        }
    } // namespace UberStateVolitileOverrideAnimator
} // namespace app::classes::types
