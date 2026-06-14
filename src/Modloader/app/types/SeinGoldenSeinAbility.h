#pragma once
#include <Modloader/app/structs/SeinGoldenSeinAbility.h>
#include <Modloader/app/structs/SeinGoldenSeinAbility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGoldenSeinAbility {
        inline app::SeinGoldenSeinAbility__Class** type_info() {
            static app::SeinGoldenSeinAbility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGoldenSeinAbility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGoldenSeinAbility__Class* get_class() {
            return il2cpp::get_class<app::SeinGoldenSeinAbility__Class>(type_info(), "", "SeinGoldenSeinAbility");
        }
        inline app::SeinGoldenSeinAbility* create() {
            return il2cpp::create_object<app::SeinGoldenSeinAbility>(get_class());
        }
    } // namespace SeinGoldenSeinAbility
} // namespace app::classes::types
