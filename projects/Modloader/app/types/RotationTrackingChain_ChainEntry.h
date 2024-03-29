#pragma once
#include <Modloader/app/structs/RotationTrackingChain_ChainEntry.h>
#include <Modloader/app/structs/RotationTrackingChain_ChainEntry__Array.h>
#include <Modloader/app/structs/RotationTrackingChain_ChainEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationTrackingChain_ChainEntry {
        inline app::RotationTrackingChain_ChainEntry__Class** type_info() {
            static app::RotationTrackingChain_ChainEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotationTrackingChain_ChainEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotationTrackingChain_ChainEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::RotationTrackingChain_ChainEntry__Class>(type_info(), "", "RotationTrackingChain", "ChainEntry");
        }
        inline app::RotationTrackingChain_ChainEntry* create() {
            return il2cpp::create_object<app::RotationTrackingChain_ChainEntry>(get_class());
        }
        inline app::RotationTrackingChain_ChainEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::RotationTrackingChain_ChainEntry__Array>(get_class(), size);
        }
        inline app::RotationTrackingChain_ChainEntry__Array* create_array(const std::vector<app::RotationTrackingChain_ChainEntry*>& items) {
            return il2cpp::array_new<app::RotationTrackingChain_ChainEntry__Array>(get_class(), items);
        }
    } // namespace RotationTrackingChain_ChainEntry
} // namespace app::classes::types
