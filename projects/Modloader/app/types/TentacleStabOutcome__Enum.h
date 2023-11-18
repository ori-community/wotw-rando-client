#pragma once
#include <Modloader/app/structs/TentacleStabOutcome__Enum.h>
#include <Modloader/app/structs/TentacleStabOutcome__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleStabOutcome__Enum {
        inline app::TentacleStabOutcome__Enum__Class** type_info() {
            static app::TentacleStabOutcome__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentacleStabOutcome__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476B200));
            }
            return cache;
        }
        inline app::TentacleStabOutcome__Enum__Class* get_class() {
            return il2cpp::get_class<app::TentacleStabOutcome__Enum__Class>(type_info(), "", "TentacleStabOutcome");
        }
        inline app::TentacleStabOutcome__Enum* create() {
            return il2cpp::create_object<app::TentacleStabOutcome__Enum>(get_class());
        }
    } // namespace TentacleStabOutcome__Enum
} // namespace app::classes::types
