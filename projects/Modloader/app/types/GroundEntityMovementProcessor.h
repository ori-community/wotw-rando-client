#pragma once
#include <Modloader/app/structs/GroundEntityMovementProcessor.h>
#include <Modloader/app/structs/GroundEntityMovementProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundEntityMovementProcessor {
        inline app::GroundEntityMovementProcessor__Class** type_info() {
            static app::GroundEntityMovementProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GroundEntityMovementProcessor__Class**)(modloader::win::memory::resolve_rva(0x04740500));
            }
            return cache;
        }
        inline app::GroundEntityMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::GroundEntityMovementProcessor__Class>(type_info(), "", "GroundEntityMovementProcessor");
        }
        inline app::GroundEntityMovementProcessor* create() {
            return il2cpp::create_object<app::GroundEntityMovementProcessor>(get_class());
        }
    } // namespace GroundEntityMovementProcessor
} // namespace app::classes::types
