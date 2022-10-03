#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotationTrackingChain_ChainEntry {
        namespace {
            app::RotationTrackingChain_ChainEntry__Class* type_info_ref = nullptr;
        }
        app::RotationTrackingChain_ChainEntry__Class** type_info = &type_info_ref;
        inline app::RotationTrackingChain_ChainEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::RotationTrackingChain_ChainEntry__Class>(type_info, "", "RotationTrackingChain", "ChainEntry");
        }
        inline app::RotationTrackingChain_ChainEntry* create() {
            return il2cpp::create_object<app::RotationTrackingChain_ChainEntry>(get_class());
        }
        inline app::RotationTrackingChain_ChainEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::RotationTrackingChain_ChainEntry__Array>(get_class(), size);
        }
    } // namespace RotationTrackingChain_ChainEntry
} // namespace app::classes::types
