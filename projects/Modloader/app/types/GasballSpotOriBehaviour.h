#pragma once
#include <Modloader/app/structs/GasballSpotOriBehaviour.h>
#include <Modloader/app/structs/GasballSpotOriBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballSpotOriBehaviour {
        inline app::GasballSpotOriBehaviour__Class** type_info() {
            static app::GasballSpotOriBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasballSpotOriBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasballSpotOriBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GasballSpotOriBehaviour__Class>(type_info(), "", "GasballSpotOriBehaviour");
        }
        inline app::GasballSpotOriBehaviour* create() {
            return il2cpp::create_object<app::GasballSpotOriBehaviour>(get_class());
        }
    } // namespace GasballSpotOriBehaviour
} // namespace app::classes::types
