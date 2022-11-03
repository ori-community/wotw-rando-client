#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossWormSpitBehaviour_Direction__Enum {
        namespace {
            inline app::KwolokBossWormSpitBehaviour_Direction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossWormSpitBehaviour_Direction__Enum__Class** type_info = &type_info_ref;
        inline app::KwolokBossWormSpitBehaviour_Direction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossWormSpitBehaviour_Direction__Enum__Class>(type_info, "", "KwolokBossWormSpitBehaviour", "Direction");
        }
        inline app::KwolokBossWormSpitBehaviour_Direction__Enum* create() {
            return il2cpp::create_object<app::KwolokBossWormSpitBehaviour_Direction__Enum>(get_class());
        }
    } // namespace KwolokBossWormSpitBehaviour_Direction__Enum
} // namespace app::classes::types
