#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DesertEscapeWormPathFollower {
        namespace {
            inline app::DesertEscapeWormPathFollower__Class* type_info_ref = nullptr;
        }
        inline app::DesertEscapeWormPathFollower__Class** type_info = &type_info_ref;
        inline app::DesertEscapeWormPathFollower__Class* get_class() {
            return il2cpp::get_class<app::DesertEscapeWormPathFollower__Class>(type_info, "", "DesertEscapeWormPathFollower");
        }
        inline app::DesertEscapeWormPathFollower* create() {
            return il2cpp::create_object<app::DesertEscapeWormPathFollower>(get_class());
        }
    } // namespace DesertEscapeWormPathFollower
} // namespace app::classes::types
