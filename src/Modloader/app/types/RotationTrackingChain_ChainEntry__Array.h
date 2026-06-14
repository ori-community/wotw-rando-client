#pragma once
#include <Modloader/app/structs/RotationTrackingChain_ChainEntry__Array.h>
#include <Modloader/app/structs/RotationTrackingChain_ChainEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationTrackingChain_ChainEntry__Array {
        inline app::RotationTrackingChain_ChainEntry__Array__Class** type_info() {
            static app::RotationTrackingChain_ChainEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotationTrackingChain_ChainEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotationTrackingChain_ChainEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RotationTrackingChain_ChainEntry__Array__Class>(type_info(), "", "RotationTrackingChain+ChainEntry[]");
        }
        inline app::RotationTrackingChain_ChainEntry__Array* create() {
            return il2cpp::create_object<app::RotationTrackingChain_ChainEntry__Array>(get_class());
        }
    } // namespace RotationTrackingChain_ChainEntry__Array
} // namespace app::classes::types
