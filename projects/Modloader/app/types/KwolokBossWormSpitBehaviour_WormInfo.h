#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour_WormInfo__Class.h>
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour_WormInfo.h>
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour_WormInfo__Array.h>

namespace app::classes::types {
    namespace KwolokBossWormSpitBehaviour_WormInfo {
        inline app::KwolokBossWormSpitBehaviour_WormInfo__Class** type_info = (app::KwolokBossWormSpitBehaviour_WormInfo__Class**)(modloader::win::memory::resolve_rva(0x04771DF8));
        inline app::KwolokBossWormSpitBehaviour_WormInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossWormSpitBehaviour_WormInfo__Class>(type_info, "", "KwolokBossWormSpitBehaviour", "WormInfo");
        }
        inline app::KwolokBossWormSpitBehaviour_WormInfo* create() {
            return il2cpp::create_object<app::KwolokBossWormSpitBehaviour_WormInfo>(get_class());
        }
        inline app::KwolokBossWormSpitBehaviour_WormInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::KwolokBossWormSpitBehaviour_WormInfo__Array>(get_class(), size);
        }
        inline app::KwolokBossWormSpitBehaviour_WormInfo__Array* create_array(const std::vector<app::KwolokBossWormSpitBehaviour_WormInfo*>& items) {
            return il2cpp::array_new<app::KwolokBossWormSpitBehaviour_WormInfo__Array>(get_class(), items);
        }
    } // namespace KwolokBossWormSpitBehaviour_WormInfo
} // namespace app::classes::types
