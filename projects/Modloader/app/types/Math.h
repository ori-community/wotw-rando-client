#pragma once
#include <Modloader/app/structs/Math.h>
#include <Modloader/app/structs/Math__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Math {
        inline app::Math__Class** type_info() {
            static app::Math__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Math__Class**)(modloader::win::memory::resolve_rva(0x0477BBA0));
            }
            return cache;
        }
        inline app::Math__Class* get_class() {
            return il2cpp::get_class<app::Math__Class>(type_info(), "System", "Math");
        }
        inline app::Math* create() {
            return il2cpp::create_object<app::Math>(get_class());
        }
    } // namespace Math
} // namespace app::classes::types
