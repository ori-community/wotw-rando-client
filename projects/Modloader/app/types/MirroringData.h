#pragma once
#include <Modloader/app/structs/MirroringData.h>
#include <Modloader/app/structs/MirroringData__Array.h>
#include <Modloader/app/structs/MirroringData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MirroringData {
        inline app::MirroringData__Class** type_info() {
            static app::MirroringData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MirroringData__Class**)(modloader::win::memory::resolve_rva(0x04717BC0));
            }
            return cache;
        }
        inline app::MirroringData__Class* get_class() {
            return il2cpp::get_class<app::MirroringData__Class>(type_info(), "", "MirroringData");
        }
        inline app::MirroringData* create() {
            return il2cpp::create_object<app::MirroringData>(get_class());
        }
        inline app::MirroringData__Array* create_array(int size) {
            return il2cpp::array_new<app::MirroringData__Array>(get_class(), size);
        }
        inline app::MirroringData__Array* create_array(const std::vector<app::MirroringData*>& items) {
            return il2cpp::array_new<app::MirroringData__Array>(get_class(), items);
        }
    } // namespace MirroringData
} // namespace app::classes::types
