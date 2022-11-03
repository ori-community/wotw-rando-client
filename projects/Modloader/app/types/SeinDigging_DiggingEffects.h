#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDigging_DiggingEffects {
        namespace {
            inline app::SeinDigging_DiggingEffects__Class* type_info_ref = nullptr;
        }
        inline app::SeinDigging_DiggingEffects__Class** type_info = &type_info_ref;
        inline app::SeinDigging_DiggingEffects__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDigging_DiggingEffects__Class>(type_info, "", "SeinDigging", "DiggingEffects");
        }
        inline app::SeinDigging_DiggingEffects* create() {
            return il2cpp::create_object<app::SeinDigging_DiggingEffects>(get_class());
        }
        inline app::SeinDigging_DiggingEffects__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinDigging_DiggingEffects__Array>(get_class(), size);
        }
        inline app::SeinDigging_DiggingEffects__Array* create_array(const std::vector<app::SeinDigging_DiggingEffects*>& items) {
            return il2cpp::array_new<app::SeinDigging_DiggingEffects__Array>(get_class(), items);
        }
    } // namespace SeinDigging_DiggingEffects
} // namespace app::classes::types
