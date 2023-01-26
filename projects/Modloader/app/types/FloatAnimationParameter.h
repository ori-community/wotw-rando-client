#pragma once
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/FloatAnimationParameter__Array.h>
#include <Modloader/app/structs/FloatAnimationParameter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatAnimationParameter {
        inline app::FloatAnimationParameter__Class** type_info() {
            static app::FloatAnimationParameter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FloatAnimationParameter__Class**)(modloader::win::memory::resolve_rva(0x0475CF70));
            }
            return cache;
        }
        inline app::FloatAnimationParameter__Class* get_class() {
            return il2cpp::get_class<app::FloatAnimationParameter__Class>(type_info(), "Moon", "FloatAnimationParameter");
        }
        inline app::FloatAnimationParameter* create() {
            return il2cpp::create_object<app::FloatAnimationParameter>(get_class());
        }
        inline app::FloatAnimationParameter__Array* create_array(int size) {
            return il2cpp::array_new<app::FloatAnimationParameter__Array>(get_class(), size);
        }
        inline app::FloatAnimationParameter__Array* create_array(const std::vector<app::FloatAnimationParameter*>& items) {
            return il2cpp::array_new<app::FloatAnimationParameter__Array>(get_class(), items);
        }
    } // namespace FloatAnimationParameter
} // namespace app::classes::types
