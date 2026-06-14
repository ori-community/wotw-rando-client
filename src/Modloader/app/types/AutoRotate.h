#pragma once
#include <Modloader/app/structs/AutoRotate.h>
#include <Modloader/app/structs/AutoRotate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutoRotate {
        inline app::AutoRotate__Class** type_info() {
            static app::AutoRotate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AutoRotate__Class**)(modloader::win::memory::resolve_rva(0x047801D8));
            }
            return cache;
        }
        inline app::AutoRotate__Class* get_class() {
            return il2cpp::get_class<app::AutoRotate__Class>(type_info(), "", "AutoRotate");
        }
        inline app::AutoRotate* create() {
            return il2cpp::create_object<app::AutoRotate>(get_class());
        }
    } // namespace AutoRotate
} // namespace app::classes::types
