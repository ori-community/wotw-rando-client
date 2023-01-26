#pragma once
#include <Modloader/app/structs/MantisGrayboxEntity.h>
#include <Modloader/app/structs/MantisGrayboxEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisGrayboxEntity {
        inline app::MantisGrayboxEntity__Class** type_info() {
            static app::MantisGrayboxEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MantisGrayboxEntity__Class**)(modloader::win::memory::resolve_rva(0x04702518));
            }
            return cache;
        }
        inline app::MantisGrayboxEntity__Class* get_class() {
            return il2cpp::get_class<app::MantisGrayboxEntity__Class>(type_info(), "", "MantisGrayboxEntity");
        }
        inline app::MantisGrayboxEntity* create() {
            return il2cpp::create_object<app::MantisGrayboxEntity>(get_class());
        }
    } // namespace MantisGrayboxEntity
} // namespace app::classes::types
