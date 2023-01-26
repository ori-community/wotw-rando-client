#pragma once
#include <Modloader/app/structs/Naru.h>
#include <Modloader/app/structs/Naru__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Naru {
        inline app::Naru__Class** type_info() {
            static app::Naru__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Naru__Class**)(modloader::win::memory::resolve_rva(0x047018B0));
            }
            return cache;
        }
        inline app::Naru__Class* get_class() {
            return il2cpp::get_class<app::Naru__Class>(type_info(), "", "Naru");
        }
        inline app::Naru* create() {
            return il2cpp::create_object<app::Naru>(get_class());
        }
    } // namespace Naru
} // namespace app::classes::types
