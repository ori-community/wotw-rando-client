#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotationTrackingChain_ChainEntry__Array {
        namespace {
            app::RotationTrackingChain_ChainEntry__Array__Class* type_info_ref = nullptr;
        }
        app::RotationTrackingChain_ChainEntry__Array__Class** type_info = &type_info_ref;
        inline app::RotationTrackingChain_ChainEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RotationTrackingChain_ChainEntry__Array__Class>(type_info, "", "RotationTrackingChain+ChainEntry[]");
        }
        inline app::RotationTrackingChain_ChainEntry__Array* create() {
            return il2cpp::create_object<app::RotationTrackingChain_ChainEntry__Array>(get_class());
        }
    } // namespace RotationTrackingChain_ChainEntry__Array
} // namespace app::classes::types
